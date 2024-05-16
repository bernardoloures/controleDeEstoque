#include <stdio.h>

int main(){
	
	int num_cc, num_cp, opcao = 999, opcao_conta, saldo_cc, saldo_cp, val_cred, val_deb;
	char cliente;
	
	
	printf("\n Entre com o nome do cliente: \n");
	scanf("%s", &cliente);
	
	printf("\n Entre com o numero da Conta Corrente: \n");
	scanf("%d", &num_cc);
	
	printf("\n Entre com o saldo inicial da Conta Corrente %d: \n", num_cc);
	scanf("%d", &saldo_cc);
	
	printf("\n Entre com o numero da Conta Poupanca: \n");
	scanf("%d", &num_cp);
	
	printf("\n Entre com seu saldo inicial da Conta Poupanca %d: \n", num_cp);
	scanf("%d", &saldo_cp);
	
	while (opcao != 5){
		
		if (opcao != 5){
			printf("\n Qual operacao deseja realizar: \n 1 - Creditar \n 2 - Debitar \n 3 - Transferir \n 4 - Saldo \n 5 - Sair \n");
			scanf("%d", &opcao);
				if(opcao == 1){
					printf("\n Qual Conta: \n 1 - Conta Corrente \n 2 - Poupanca \n");
					scanf("%d", &opcao_conta);
						if (opcao_conta == 1){
							printf("\n Qual valor a creditar na conta corrente %d: \n", num_cc);
							scanf("%d", &val_cred);
							saldo_cc = saldo_cc + val_cred;
							printf("\n Saldo atual na Conta Corrente %d: \n", saldo_cc);
						}
				}
				else if(opcao == 2){
					printf("Qual conta: \n 1 - Corrente \n 2 - Poupança \n");
					scanf("%d", &opcao_conta);
						if(opcao_conta == 1){
							printf("Qual valor a debitar na conta corrente %d: \n", num_cc);
							saldo_cc = saldo_cc + val_deb;
							printf("Saldo atual na Conta Corrente %d: \n", saldo_cc);
						}
					
				}
		
		}
		
	}	
		
		
		
}
	
