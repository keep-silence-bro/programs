#include<stdio.h>
#include<conio.h>
int search(int ,int ,int ,int);
void main()
{
	int i,size,num,arr[100],k=0;
	printf("\nEnter size of array");
	scanf("%d",&size);
	for(i = 0; i < size; i++)
	{
		printf("\nEnter the element to store in array");
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to search in an array");
	scanf("%d",&num);
    search( num,size, k, i);
    getch();
}
int search(int num,int size,int k,int i)
{
	int arr[100];
    for (i = 0; i < size; i++)
	{
		if(arr[i]==num)
		{
			k++;
		}
	}
	if(k==0)
	{
		printf("%d is not found ", num);
	}
	else
	{
		printf("%d is found  %d times ",num,k);
	}
}