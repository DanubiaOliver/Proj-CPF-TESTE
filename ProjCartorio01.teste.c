#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o

int teste() 
{
	pintf("Funcionou a fun��o Tia");
}

int main()
{
	int opcao=0; //definindo as vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		system("cls");
		
		setlocale(LC_ALL, "Portuguese");  //definindo a linguagem
	
		printf("### Cart�rio da EBAC ###\n\n"); //in�cio do menu
		printf("Escolha a op��o desejada do menu: \n\n"); 
		printf("\t1 - Registrar nomes \n");
		printf("\t2 - Consultar nomes \n");
		printf("\t3 - Deletar nomes\n\n"); //fim do menu
		printf("Op��o: ");
	
		scanf("%d", &opcao);  //armazenando a escolha do usu�rio - na mem�ria da m�quina 
	
		system("cls");
	
		if(opcao==1) //in�cio da sele��o
		{
			printf("Voc� escolheu o registro de nomes!\n");
			sytem("pause");
		}
		if(opcao==2)
		{
			printf("Voc� escolheu consultar os nomes!\n");
			sytem("pause");
		}
		if(opcao==3)
		{ 
			printf("Voc� escolheu deletar nomes!\n");
			sytem("pause");
		}
		if(opcao>=4 || opcao <=0)
		{
			printf("Esta op��o n�o est� dispon�vel!\n");
			sytem("pause");
		} // fim da sele��o.
	
	}
}

