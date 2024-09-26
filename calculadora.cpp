#include <stdio.h>
#include <stdlib.h>
int main()
{
	// variavel para op��o
	int op;
	float n1, n2, soma, sub, div, mul;
	
	do
	{
		printf("CALCULADORA-SIMPLES\n");
		printf("1 - + \n");
		printf("2 - - \n");
		printf("3 - / \n");
		printf("4 - * \n");
		printf("5 - % % \n");
		printf("6 - sair\n");

		// conversar com o usuario
		printf("Digite a op�cao desejada: ");
		scanf("%d", &op);

		// estrutura switch case para trabalhar com opc�es de acordo com o que foi escolhido pelo usuario
		switch (op)
		{

		case 1:
			system("cls");
			printf("digite o 1 numero:");
			scanf("%d", &n1);

			printf("digite o 2 numero:");
			scanf("%d", &n2);

			soma = n1 + n2;
			printf("a soma e%0.2f:", soma);
			break;
		case 2:
			system("cls");
			printf("digite o 1 numero:");
			scanf("%d", &n1);

			printf("digite o 2 numero:");
			scanf("%d", &n2);

			sub = n1 - n2;
			printf("a sub e%0.2f:", sub);
			break;
		case 3:
			system("cls");
			printf("digite o 1 numero:");
			scanf("%d", &n1);

			printf("digite o 2 numero:");
			scanf("%d", &n2);

			div = n1 / n2;
			printf("a soma e%0.2f:", div);

			break;
		case 4:

			system("cls");
			printf("digite o 1 numero:");
			scanf("%d", &n1);

			printf("digite o 2 numero:");
			scanf("%d", &n2);

			mul = n1 * n2;
			printf("a soma e%0.2f:", mul);
			break;
		case 5:
			break;
		case 6:
			printf("sair do programa");
			break;

		default:
			printf("Opcao inv�lida!");
			break;
		}

	} while (op != 6);
	return 0;
}
