# include <stdio.h>
int main()
{
	int m;
	int c=0;
	
	scanf("%d",&m);
	
	for(int i=0;i<m;i++)
		for(int i=0;i<m;i++)
			scanf("%d",&grid[i][j]);
			
	for(int i=0;i<m;i++)
		for(int i=0;i<m;i++)
			if(grid[i][j]==1)
			{
				c++;
				grid[i][j]==0;
				
				traverse(i,j);
			}
	
	
	for(int i=0;i<m;i++)
		for(int i=0;i<m;i++)
			printf("%d ",grid[i][j]);
	
	printf("%d",c);
}


void traverse(int i,int j)
{
	
}
