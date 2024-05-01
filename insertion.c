
#include<stdio.h>
int main(){
	int i,j,n,x,a[10];
	/*Ask the user to enter the size of array*/

	printf("Enter the size of array");
	scanf("%d",&n);

	/*Ask the user to enter the unsorted elements in the array*/

	printf("\nenter the unsorted elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	/*Print the usorted array*/
	
	printf("\n unsorted elements are");
	for(i=0;i<n;i++)
	{	
		printf("%4d",a[i]);
	}

	for(i=1;i<n;i++)
	{
		x=a[i]; /*putting first element in the sorted list*/
		/*now to check the rest of the elements will use another for loop*/
		for(j=i-1;j>=0 && x<=a[j];j--)
		{
			a[j+1]=a[j];
			a[j]=x;
		}
	}
	/*print the unsorted list*/

	printf("\n sorted list : ");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}