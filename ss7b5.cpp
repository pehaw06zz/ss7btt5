#include<stdio.h>
int main(){
	int array[5]={7,5,12,22,9};
	int max=array[0];
	int min=array[0];
	for(int i=0;i<5;i++){
		if(array[i] > max){
			max=array[i];
		}
		if(array[i] < min){
			min=array[i];
		}
	}
	printf("phan tu lon nhat trong mang: %d\n",max);
	printf("phan tu nho nhat trong mang: %d\n",min);
	return 0;
}
