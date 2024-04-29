// write a program to insert an element at any specific position of a array. 

#include<stdio.h>
int main(){
	int arr[100],n,i,pos,elem;
	printf("enter the number of elements of the array: \n");
	scanf("%d",&n);
	
	printf("enter %d elements\n",n);
	
	for(i = 0;i<n;i++){
		scanf("%d",&arr[i]);
		}
	
	printf("enter the element to insert and position: \n");
	scanf("%d %d",&elem,&pos);
	
	for(i = n-1;i>=pos-1;i--){
		arr[i+1] = arr[i];
		}
	
	arr[pos-1] = elem;
	
	printf("new array is: ");
	for(i = 0;i<=n;i++){
		printf("%d ",arr[i]);
		}
	return 0;
}