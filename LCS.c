
#include<stdio.h>
#include<string.h>

#define max(x,y) ((x,y) ? (x) : (y))

int result[200][200];
char str1[200],str2[200];

int main()
{
	printf("Enter the first string :");
	scanf("%s",&str1);

	printf("Enter the second string :");
	scanf("%s",&str2);

	int n=strlen(str1);
	int m=strlen(str2);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(str1[i-1]==str2[i-1])
			{
				result[i][j]=result[i-1][j-1]+1;
			}
			else
			{
				result[i][j]=max(result[i-1][j],result[i][j-1]);
			}
		}
	}
	printf("\nthe longest common subsequence is %d",result[n][m]);
	return 0;

}