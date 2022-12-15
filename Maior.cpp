#include <stdio.h>
#include <locale.h>

int maior(int x, int y){
	int r;	
	if(x>y){
		r=x;
	}else {
		r=y;
	}
	return r;
}
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a,b,d;
	
	printf("A: ");
	scanf("%d",&a);
	printf("B: ");
	scanf("%d",&b);
	
	d=maior(a,b);
	printf("\nMaior é: %d\n",d);
	
	return 0;
}
