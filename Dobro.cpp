#include <stdio.h>
#include <locale.h>

int dobro(int num){

	return 2*num;	
}
/*int dobro(int num){
	int d = 2*num;
	return d;	
}
*/
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int n,x;
	printf("Digite N: ");
	scanf("%d",&n);
	x=dobro(n);
	printf("\nDobro de %d é : %d",n,x);
	
	return 0;
}


