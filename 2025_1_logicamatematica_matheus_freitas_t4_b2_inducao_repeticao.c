#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n=== Menu ===\n");
        printf("1 - Fatorial\n");
        printf("2 - Fibonacci\n");
        printf("3 - Somatorio\n");
        printf("4 - Produtorio\n");
        printf("5 - Soma PA\n");
        printf("6 - Soma PG\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        //Fatorial
        if (opcao == 1) {
            int numero;
            int resultado = 1;
            int i = 1;

            do {
                printf("Digite um numero nao-negativo: ");
                scanf("%d", &numero);
                if (numero < 0) {
                    printf("Numero invalido\n");
                }
            } while (numero < 0);

            while (i <= numero) {
                resultado = resultado * i; //Base da inducao: fatorial(n)  = fatorial(n-1) * n
                i = i + 1; //Base da inducao: fatorial(0) = 1
            }

            printf("Fatorial de %d = %d\n", numero, resultado);
        }
        
        //Fibonacci
        else if (opcao == 2) {
            int posicao;
            int a = 0;
            int b = 1;
            int c;
            int i = 2;

            do {
                printf("Digite a posicao (>0): ");
                scanf("%d", &posicao);
                if (posicao < 1) {
                    printf("Posicao invalida\n");
                }
            } while (posicao < 1);

            if (posicao == 1) {
                printf("Fibonacci(1) = 0\n"); //Imprime o termo atual
            }
            else if (posicao == 2) {
                printf("Fibonacci(2) = 1\n");
            }
            else {
                while (i < posicao) { //Passo da Inducao: fib(n) = fib(n-1) + fib(n-2)
                    c = a + b;
                    a = b;
                    b = c;
                    i = i + 1; 
                }
                printf("Fibonacci(%d) = %d\n", posicao, b);
            }
        }

        //Somatorio
        else if (opcao == 3) {
            int limite;
            int soma = 0;
            int i = 1;

            do {
                printf("Digite o limite (>0): ");
                scanf("%d", &limite);
                if (limite < 1) {
                    printf("Valor invalido\n");
                }
            } while (limite < 1);
            //Base da Inducao: soma(1) = 1
            while (i <= limite) {
                soma = soma + i;
                i = i + 1; //Passo da Inducao: soma(n) = soma(n-1) + n
            }

            printf("Somatorio de 1 ate %d = %d\n", limite, soma);
        }
        
        //Produtorio
        else if (opcao == 4) {
            int limite;
            int produto = 1;
            int i = 1;

            do {
                printf("Digite o limite (>0): ");
                scanf("%d", &limite);
                if (limite < 1) {
                    printf("Valor invalido\n");
                }
            } while (limite < 1); //Base da Inducao: produtorio(1) = 1

            while (i <= limite) {
                produto = produto * i; //Passo da Inducao: produtorio(n) = produtorio(n-1) * n
                i = i + 1;
            }

            printf("Produtorio de 1 ate %d = %d\n", limite, produto);
        }

        //Progressao Aritmetica
        else if (opcao == 5) {
            int primeiro, razao, termos;
            int soma = 0;
            int i = 0;
            int atual;

            printf("Primeiro termo da PA: ");
            scanf("%d", &primeiro);
            printf("Razao da PA: ");
            scanf("%d", &razao);

            do {
                printf("Quantos termos? ");
                scanf("%d", &termos);
                if (termos < 1) {
                    printf("Valor invalido\n");
                }
            } while (termos < 1);
            //Base da Inducao: soma(1) = primeiro termo
            atual = primeiro;
            while (i < termos) {
                soma = soma + atual; //Passo da Inducao: soma(n) = soma(n-1) + termo_atual
                atual = atual + razao;
                i = i + 1;
            }

            printf("Soma dos %d termos da PA = %d\n", termos, soma);
        }

        //Progressao Geometrica
        else if (opcao == 6) {
            int primeiro, razao, termos;
            int soma = 0;
            int i = 0;
            int atual;

            printf("Primeiro termo da PG: ");
            scanf("%d", &primeiro);
            printf("Razao da PG: ");
            scanf("%d", &razao);

            do {
                printf("Quantos termos? ");
                scanf("%d", &termos);
                if (termos < 1) {
                    printf("Valor invalido\n");
                }
            } while (termos < 1);
            //Base da Inducao: soma(1) = primeiro termo
            atual = primeiro;
            while (i < termos) {
                soma = soma + atual;
                atual = atual * razao;  //Passo da Inducao: soma(n) = soma(n-1) + termo_atual
                i = i + 1;
            }

            printf("Soma dos %d termos da PG = %d\n", termos, soma);
        }

        else if (opcao == 7) {
            printf("Saindo...\n");
        }

        else {
            printf("Opcao invalida\n");
        }

    } while (opcao != 7);

    return 0;
}
