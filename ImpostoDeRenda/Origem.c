#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Funcionario {  // iniciando a struct

	char nome[30]; // nome com máximo de 30 caracteres
	double salario;

}; struct Funcionario func; // variável da struct

int main() {

	printf_s(" _________________________________________________________"); // Impressão do quadro de valores na tela
	printf_s("\n");
	printf_s("| Base de Calculo mensal em Reais | Aliquota(Porcentagem) |");
	printf_s("\n");
	printf_s("|_________________________________|_______________________|");
	printf_s("\n");
	printf_s("| Ate 1.637,11                    | -                     |");
	printf_s("\n");
	printf_s("|_________________________________|_______________________|");
	printf_s("\n");
	printf_s("| De 1.637,12 ate 2.453,50        |  7,5                  |");
	printf_s("\n");
	printf_s("|_________________________________|_______________________|");
	printf_s("\n");
	printf_s("| De 2.453,51 ate 3.271,38        |  15,0                 |");
	printf_s("\n");
	printf_s("|_________________________________|_______________________|");
	printf_s("\n");
	printf_s("| De 3.271,39 ate 4.087,65        |  22,5                 |");
	printf_s("\n");
	printf_s("|_________________________________|_______________________|");
	printf_s("\n");
	printf_s("| Acima de 4.087,65               |  27,5                 |");
	printf_s("\n");
	printf_s("|_________________________________|_______________________|");
	printf_s("\n");
	printf_s("\n");

	printf_s(" DIGITE SEU NOME: ");
	fflush(stdin); // entrada para o teclado
	fgets(func.nome, 30, stdin); // nome da variável, tamanho e entrada padrão.

	printf_s("\n DIGITE SEU SALARIO: ");
	scanf_s("%lf", &func.salario);

	float imposto; // Para fazer o calculo do imposto de renda devido
	if (func.salario <= 1637.11)
	{
		imposto = 0.0;
	}
	else if (func.salario <= 2453.50)
	{
		imposto = (func.salario * 7.5) / 100; // calculo da porcentagem
	}
	else if (func.salario <= 3271.38)
	{
		imposto = (func.salario * 15.0) / 100;
	}
	else if (func.salario <= 4087.65)
	{
		imposto = (func.salario * 22.5) / 100;
	}
	else if(func.salario > 4087.65)
	{
		imposto = (func.salario * 27.7) / 100;
	}

	if (imposto == 0) // Laço para imprimir na tela se o usuário está Insento de impostos 
	{
		printf_s("\n Imposto Devido = Isento");
	}
	else
	{
		printf_s("\n Imposto devido =  %.2f", imposto); // Imprime o valor do imposto devido
	}

	getch();
	return 0;
}