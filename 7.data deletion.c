// write a program to delete an element from an array

#include<stdio.h>
int main(){
	int arr[10],pos,n;
	
	printf("enter the number of elemetns of the array: \n");
	scanf("%d",&n);
	
	
	printf("enter the elements: \n");
	
	for(int i = 0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("enter the position to delete: \n");
	scanf("%d",&pos);
	
	for(int i = pos-1;i<n;i++)
		arr[i] = arr[i+1];
		
	printf("the array is\n");
	for(int i = 0;i<n-1;i++)
		printf("%d ",arr[i]);
return 0;
}