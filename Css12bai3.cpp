#include<stdio.h>
int giaithua(int n);
int main(){
	int number;
	printf("Moi ban nhap so ");
	scanf("%d",&number);
    int result=giaithua(number);
    if(number<0){
    	printf("Khong tinh duoc giai thua cua so am ");
	}else{
		printf("giai thua cua %d la %d",number,result);
	}
	
	return 0;
}
int giaithua(int n){
	if(n<0){
		return 0;
	}
	else{
	int giatri=1;
		for(int i=1;i<=n;i++){
			giatri *=i;
		}
		return giatri;
	}
	
}
