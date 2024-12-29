#include<stdio.h>
void printArray(int arr[],int size);
int main(){
	int n;
	printf("Moi ban nhap kich thuoc mang ");
	scanf("%d",&n);
	int array[n];
	printf("Moi ban nhap gia tri tung phan tu ");
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printArray(array,n);
	return 0;
}
void printArray(int arr[],int size){
	printf("Gia tri tung phan tu trong mang la:");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
