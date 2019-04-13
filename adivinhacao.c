#include <stdlib.h>
#include <stdio.h>

int main()
{

    printf("**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhacao\n");
    printf("**************************************\n");

    int numerosecreto = 42;
    int chute = 0;

    printf("Qual e' o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if (numerosecreto == chute)
    {
        printf("Parabens! Voce acertou!\n");
        printf("Jogue de novo, voce eh um bom jogador!");
    }
    else
    {
        if (chute > numerosecreto)
        {
            printf("Seu chute foi maior que o numero secreto\n");
        }
        if (chute < numerosecreto)
        {
            printf("Seu chute foi menor que o numero secreto\n");
        }
    }

    return 0;
}