#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região

int teste() 
{
	pintf("Funcionou a função Tia");
}

int main()
{
	int opcao=0; //definindo as variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		system("cls");
		
		setlocale(LC_ALL, "Portuguese");  //definindo a linguagem
	
		printf("### Cartório da EBAC ###\n\n"); //início do menu
		printf("Escolha a opção desejada do menu: \n\n"); 
		printf("\t1 - Registrar nomes \n");
		printf("\t2 - Consultar nomes \n");
		printf("\t3 - Deletar nomes\n\n"); //fim do menu
		printf("Opção: ");
	
		scanf("%d", &opcao);  //armazenando a escolha do usuário - na memória da máquina 
	
		system("cls");
	
		if(opcao==1) //início da seleção
		{
			printf("Você escolheu o registro de nomes!\n");
			sytem("pause");
		}
		if(opcao==2)
		{
			printf("Você escolheu consultar os nomes!\n");
			sytem("pause");
		}
		if(opcao==3)
		{ 
			printf("Você escolheu deletar nomes!\n");
			sytem("pause");
		}
		if(opcao>=4 || opcao <=0)
		{
			printf("Esta opção não está disponível!\n");
			sytem("pause");
		} // fim da seleção.
	
	}
}

