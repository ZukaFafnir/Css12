#include<stdio.h>
int findMax(int array[],int size);
int main(){
	int n;
	printf("Moi ban nhap kich thuoc mang ");
	scanf("%d",&n);
	int array[n];
	printf("Moi ban nhap gia tri cua tung phan tu ");
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
}
    int max=findMax(array,n);
    printf("Phan tu co gia tri lon nhat trong mang la %d",max);
	return 0;
}
int findMax(int array[],int size){
	int max=array[0];
	for(int i=1;i<size;i++){
		if(max<array[i]){
			max=array[i];
		}
	}
return max;	
}
