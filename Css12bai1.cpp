#include<stdio.h>
int total(int a,int b);
int main(){
	int a,b;
	printf("Moi ban nhap 2 so a va b\n");
	scanf("%d%d",&a,&b);
	printf(" Tong cua 2 so vua nhap la %d",total(a,b));
	
	
	
	return 0;
}
int total(int a,int b){
	int total=a+b;
	return total;
	
	
	
	
}
