#include <stdio.h>
#include <locale.h>

int dobro_maior(int x, int y){
	int r;
	
	if(x>y){
		r=2*x;
	}else {
		r=2*y;
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
	
	d=dobro_maior(a,b);
	printf("Dobro : %d",d);
	
	return 0;
}
