#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void my_menu();
void my_ips();
void add_ip();
void remove_ip();
int main() {
	my_menu();
	return 0;
}


void clear_screen() {
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif

}


void my_menu() {
	int option;
	clear_screen();
	printf("-----------------------------------------------\n");
	printf("\nHealth Check CLI\n\n");
	printf("\n 10.0.0.0 - Desconectado.\n");
	printf("\n1. Ver IPs registrados;");
	printf("\n2. Adicionar um IP;");
	printf("\n3. Remover um IP;");
	printf("\n\n\n\n");
	printf("----------------------     SD Marinari, 2024. \n");
	printf("\n");
	scanf("%d", &option);
	switch(option) {
		case 1:
			my_ips();
			break;
		case 2:
			add_ip();
			break;
		case 3:
			remove_ip();
			break;
		default:
			printf("Opção inválida! Tente novamente.\n");
			break;
	}	
}



void my_ips() {
	int option;
	clear_screen();
	printf("IPs REGISTRADOS: ----------------\n");
	printf("1. Voltar \n");
	scanf("%d", &option);	
	if (option == 1) {
		my_menu();
	}

}



void add_ip() {
	printf("Função para adicionar IP ainda não implementada.");
	my_menu();
}

void remove_ip() {
	printf("Função para remover um IP ainda não implementada.");
	my_menu();
}

