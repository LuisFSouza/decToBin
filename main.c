#include <stdio.h>

int main (){

    int resto, quociente, contador=1, bin = 0;

    scanf("%d", &quociente);

    while(quociente > 0)
    {
        resto = quociente % 2;
        bin = bin + resto * contador;
        contador = contador * 10;
        quociente = quociente / 2;
    }

    printf("%d", bin);

    return (0);
}