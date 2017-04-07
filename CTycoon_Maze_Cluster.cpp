#include <bits/stdc++.h>
using namespace std;

int arr[10][10];
int clusnum;
char str[1000];
int ind;
char len;



void rec(int x,int y,int M)  // x=row np. ; y=column no.
{
	if((arr[x][y])==0)
	return;

	str[++ind]='(';
	str[++ind]=(char)(x+48);
	str[++ind]=',';
	str[++ind]=(char)(y+48);
	str[++ind]=')';


	arr[x][y]=0;

	if(x==0)
	{
		rec(x+1,y,M);

		if(y==0)
		rec(x,y+1,M);

		else if(y==(M-1))
		rec(x,y-1,M);

		else
		{
			rec(x,y+1,M);
			rec(x,y-1,M);
		}

	}
	else if(x==(M-1))
	{
		rec(x-1,y,M);

		if(y==0)
		rec(x,y+1,M);

		else if(y==(M-1))
		rec(x,y-1,M);

		else
		{
			rec(x,y+1,M);
			rec(x,y-1,M);

		}
	}
	else
	{
		rec(x+1,y,M);
		rec(x-1,y,M);

		if(y==0)
		rec(x,y+1,M);
		else if(y==(M-1))
		rec(x,y-1,M);
		else
		{
			rec(x,y-1,M);
			rec(x,y+1,M);
		}
	}



}

int main()

{

	clusnum=-1;
	int M;
	cin>>M;



	for(int i=0;i<M;i++)
	{
		for(int j=0;j<M;j++)
		scanf("%d",&arr[i][j]);

	}

	ind=-1;

	for(int i=0;i<M;i++)
	{
		for(int j=0;j<M;j++)
		{
			printf("0 ");
		}
	}
	printf("\n");

	for(int i=0;i<M;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(arr[i][j]==1)
			{
				str[++ind]='[';
				clusnum++;
				rec(i,j,M);
				str[++ind]=']';

			}

		}

	}
	str[++ind]='\0';



	cout<<(clusnum+1)<<endl;
	puts(str);
}
