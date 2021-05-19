#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	unsigned char i, j;
	short int z=1;

	system("color 02"); //somente windowns
	printf("\t---TABELA ASCII---");

	for (i = 1; i <= 15; i++)
	{	printf("\n\t________________________\n");
		printf("\t|-DEC-|-OCT-|-HEX-|-CAR-|");

		for (j = 1; j <= 17; j++)
		{	
			printf("\n\t| %3d | %3o |  %2X |  %1c  |", z,z,z,z);
			z++;
		}
	printf("\n\t________________________\n");
	printf("\n\tPressione qualquer tecla para continuar..");
	getchar();
	}
}

