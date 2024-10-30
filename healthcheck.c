#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void my_menu();

int main() {
	my_menu();
	return 0;
}


void clear_screen() {
	#ifdef _WIN32
		system("cls"); /*Para Windows*/
	#else
		system("clear"); /*Para Linux/MAC*/
	#endif

}


void my_menu() {
	int option;
	clear_screen();
	printf("-----------------------------------------------\n");
	printf("\nMyNetwork CLI\n\n");
	printf("\n 10.0.0.0 - Desconectado.\n");
	printf("\n1. Ver IPs registrados;");
	printf("\n2. Adicionar um IP;");
	printf("\n3. Remover um IP;");
	printf("\n\n\n\n");
	printf("----------------------     SD Marinari, 2024. \n");
	printf("\n");
	scanf("%d", option);

}



void my_ips() {
	
}


