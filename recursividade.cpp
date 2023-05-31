#include "recursividade.h"

recursividade::recursividade()
{

}

int recursividade::Fatorial(int numero)
{
    if (numero < 0)
    {
        throw QString("Numero negativo");
    }
    if (numero == 0)
    {
        return 1;
    }
    return numero * Fatorial(numero - 1);
}

int recursividade::somatorio(int numero)
{
    if (numero > 0)
    {
        return numero + somatorio(numero - 1);
    }
    return 0;
}

QString recursividade::Binario(int numero)
{
    if (numero == 0)
    {
        return "";
    }
    return Binario(numero / 2) + QString::number(numero % 2);
}

int recursividade::potencia(int base, int expoente)
{
    if (expoente == 1)
    {
        return base;
    }
    if (expoente == 0)
    {
        return 1;
    }
    return base * potencia(base, expoente - 1);
}

QString recursividade::Fibonacci(int numero, int a, int b)
{
    if (numero > 0)
    {
        return QString::number(a) + " " + Fibonacci(numero - 1, b, a+b);
    }
    return "";
}

int recursividade::CalculoFibonacci(int numero)
{
    if (numero <= 1)
    {
        return numero;
    }
    return CalculoFibonacci(numero - 1) + CalculoFibonacci(numero - 2);
}

void quickSort(int vetor[], int primeiro, int ultimo) {
    int i, j, pivo, aux;
    i = primeiro;
    j = ultimo - 1;
    pivo = vetor[(primeiro + ultimo) / 2];
    while (i <= j) {
        while (vetor[i] < pivo && i < ultimo) {
            i++;
        }
        while (vetor[j] > pivo && j > primeiro) {
            j--;
        }
        if (i <= j) {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++;
            j--;
        }
    }
    if (j > primeiro) {
        quickSort(vetor, primeiro, j + 1);
    }
    if (i < ultimo) {
        quickSort(vetor, i, ultimo);
    }
}


QString torre_hanoi(int n, char origem, char destino, char auxiliar) {
  QString resultado = "";
  if (n == 1) {
    resultado = "Mover disco 1 de " + QString(origem) + " para " + QString(destino) + "\n";
  } else {
    resultado += torre_hanoi(n-1, origem, auxiliar, destino);
    resultado += "Mover disco " + QString::number(n) + " de " + QString(origem) + " para " + QString(destino) + "\n";
    resultado += torre_hanoi(n-1, auxiliar, destino, origem);
  }
  return resultado;
}

