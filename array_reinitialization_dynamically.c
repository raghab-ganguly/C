#include<stdio.h>
#include<stdlib.h>

void print(int *,int);

int main(void)
{
	int arr[10];    
	arr[2];        //not possible to reinitialize same array after declaration..
	printf("%d\n",sizeof(arr)/sizeof(int));
	int *ptr;
	int n1,n2;
	printf("Enter the size of the array: ");
	scanf("%d",&n1);
	ptr=(int *)calloc(n1,sizeof(int));
	
	printf("Enter the values:\n");
	
	for(int i=0;i<n1;i++)
		scanf("%d",&ptr[i]);
	
	print(ptr,n1);
	
	
	
	printf("Enter the size of the array: ");
	scanf("%d",&n2);
	ptr=(int *)realloc(ptr,n2*sizeof(int));
	
	printf("\nEnter the values:\n");
	
	for(int i=n1;i<n2;i++)
		scanf("%d",&ptr[i]);
	
	print(ptr,n2);
	
	for(int i=0;i<n2;i++){
		printf("\n%u",&ptr[i]);
	}
	free(ptr);
	return 0;
}


void print(int *arr,int size)
{
	for(int i=0;i<size;i++)
		printf("\n%d\t",arr[i]);
	printf("\n\n");	
}
