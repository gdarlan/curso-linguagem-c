#include <stdlib.h>
#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5
int main()
{

    printf("**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhacao\n");
    printf("**************************************\n");

    int numerosecreto = 42;
    int chute = 0;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
    {
        printf("Tentativa %d de 3\n", i);
        printf("Qual e' o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if (acertou)
        {
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo, voce eh um bom jogador!");
            break;
        }
        else
        {
            if (maior)
            {
                printf("Seu chute foi maior que o numero secreto\n");
            }
            else
            {
                printf("Seu chute foi menor que o numero secreto\n");
            }
        }
    }

    return 0;
}