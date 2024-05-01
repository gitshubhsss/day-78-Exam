
#include<stdio.h>

int main()
{
	int n,val[],wt[],Capacity;
	int i;
	printf("enter the no of objects");
	scanf("%d",&n);

	printf("Enter the values and weights");
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&val[i],&wt[i]);
	}
	
	printf("enter the capacity");
	scanf("%d",&Capacity);

	printf("%d",knapsack(n,val,wt,Capacity));
	return 0;
}

int knapsack(int n,int val[],int wt[],int Capacity)
{
	int i,w; /*this two varables is for the loops*/
	int K[n+1][Capacity+1]; /*ie..K[i][w] */
	
	for(i=0;i<=n;i++)
	{
		for(w=0;w<=Capacity;w++)
		{
			if(i==0 || w==0)
			{
				K[i][w]=0;
			}
			elseif (wt[i-1]<=w)
			{
				K[i][w]=max(val[i-1]+K[i-1][w-wt[i-1],K[i-1][w]);
			}
			else
			{
				K[i][w]=K[i-1][w]
			}
			
		}
	}
	return K[n][capacity];
}

int max(int a,int b)
{
	return(a>b) ? a:b;
}