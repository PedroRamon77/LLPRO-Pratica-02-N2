#include <stdio.h>
#include <locale.h>

int imprimir_varios(int x){

	while(x){
		printf("Adoro programar\n");
		--x;
	}
	printf("O valor de quantidade �: %d\n",x);
}
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int x;
	scanf("%d",&x);
	imprimir_varios(x);
	printf("O valor de X � : %d",x);
	return 0;
}




