#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL,"Portuguese");
int voto, cand1, cand2, cand3, branco, nulo=0, encerrar;

printf("Sistema Eleitoral");
printf("\nCandidatos:\n 1-Jose\n 2-Jorge\n 3-Pedro\n 4-Branco\n 5-Nulo\n 6-Encerrar");

do{
	printf("\nVoto: ");
	scanf("%d", &voto);
	if(voto==1){
		cand1=cand1+1;
	printf("Voc� votou no Jos�\n");
	}else{
		if(voto==2){
		cand2=cand2+1;
	printf("Voc� votou no Jorge\n");
	}else{
		if(voto==3){
		cand3=cand3+1;
	printf("Voc� votou no Pedro\n");
	}else{
		if(voto==4){
		branco=branco+1;
	printf("Voc� votou Branco\n");
	}else{
	if(voto==5){
		nulo==nulo+1;
	printf("Voc� votou Nulo\n");
	}else{
		if(voto==6){
			break;
			printf("Vota��o finalizada\n");
		}
	}if((voto<0) || (voto>5)){
		{
		printf("Voto inv�lido\n");
		encerrar=voto;
		}
						}
					}
				}
			}
		}
system("pause");
system("cls");
	}while(encerrar!=6);	
	printf("\nJose %d\nJorge %d\nPedro %d\nBranco %d\nNulo %d\n", cand1, cand2, cand3, branco, nulo);



	}
	


