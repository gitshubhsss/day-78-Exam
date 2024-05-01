#include<stdio.h>
#include<conio.h>
int main()
{
	
	int n=6,i,j;
	int arr[6]= {7,4,10,8,3,1}; /* 7 4 10 8 3 1*/
	
	int swap;
	
	
	for(i=0;i<n-1;i++){
		int min=i; /*consider the first element is in the sorted list 
		and now use the forloop to search the index+1 elements*/
		
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j; /*value of min will be upadate here*/

			}
			
		}
		if(min !=i)
		{
			swap=arr[i];
			arr[i]=arr[min];
			arr[min]=swap;
		}
	}
	
	printf("sorted list : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t", arr[i]);
	}
	
	return 0;
	
}