#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main (){ 
SetConsoleOutputCP(CP_UTF8);
	int cdvD, senhaD;
	int cdvC, senhaC;
	int familia;
	int gas,eletricidade;
	
	printf("Digite uma senha e um código de verificação\n");
	printf("SENHA:\n");
	scanf("%i", &senhaC);
	
	printf("CÓDIGO DE VERIFICAÇÃO:\n");
	scanf("%i", &cdvC);
	
	printf("\n........SUA SENHA E CODIGO DE VERIFICACAO FOI SALVA........\n");
	printf("digite a sua senha\n");
	scanf("%i", &senhaD);
	
	printf("digite o seu codigo de verificacao\n");
	scanf("%i", &cdvD);
	
	if(cdvD == cdvC && senhaD == senhaC){
	printf("\n......SUA SENHA E CODIGO DE VERIFICACAO ESTAO CORRETOS......\n");
   
   // 2º parte 
   
   printf("\nQuantas pessoas moram com você?:\n ");
   scanf("%d",&familia);
   
   printf(" _____________\n");
   printf("|             |\n");
   printf("|     GÁS     |\n");
   printf("|_____________|\n");
   
   printf("\nEm sua casa, utiliza-se:\n");
   printf("\n[1] Gás encanado");
   printf("\n[2] Botijão de gás (GLP)");
   printf("\n[3] Nenhum\n");
   scanf("%d",&gas);
   
   
   switch (gas){
   	
   		case 1:
   		printf("Gás encanado\n");
   		break;
   		case 2:
   		printf("Botijão de gás (GLP)\n");
   		break;
   		case 3:
   		printf("Nenhum\n");
   			
   }
   
   printf(" ______________\n");
   printf("|              |\n");
   printf("| ELETRICIDADE |\n");
   printf("|______________|\n");
   
   printf("\nEm sua casa, o consumo gasto de energia é de aproximadamente:\n");
   printf("\n[1] Nada (R$ 0,00)");
   printf("\n[2] Pouco (R$ 63,00)");
   printf("\n[3] Bastante (R$ 252,00)\n");
   scanf("%d",&eletricidade);
   
   
   switch (eletricidade){
   	
   		case 1:
   		printf("Nada (R$ 0,00)\n");
   		break;
   		case 2:
   		printf("Pouco (R$ 63,00)\n");
   		break;
   		case 3:
   		printf("Bastante (R$ 252,00)\n");
   			
   }

   
   
	}else if(cdvD != cdvC || senhaD != senhaC){	
    printf("\n......SUA SENHA OU CODIGO DE VERIFICACAO ESTA INCORRETO TENTE DENOVO......\n");	
    
    
    
    }
	return 0;
}  