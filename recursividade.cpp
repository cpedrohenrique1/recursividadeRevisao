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

