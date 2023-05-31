#ifndef RECURSIVIDADE_H
#define RECURSIVIDADE_H

#include <QString>

class recursividade
{
public:
    recursividade();
    int Fatorial(int numero);
    int somatorio (int numero);
    QString Binario(int numero);
    int potencia(int base, int expoente);
    QString Fibonacci(int numero, int a = 1, int b = 1);
    int CalculoFibonacci(int numero);
    QString torre_hanoi(int n, char origem, char destino, char auxiliar);
};

#endif // RECURSIVIDADE_H
