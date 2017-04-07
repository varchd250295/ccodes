#include <stdio.h>
int main()
{
	int x,p,q;
	scanf("%d %d %d",&x,&p,&q);
	
	int server[100]={0};
	int c=0;
	
	int s[100];
	for(int i=0;i<x;i++)
		scanf("%d",&s[i]);
		
	for(int i=0;i<x;i++)
		s[i]--;	
		
	int a=p*q;
	
	for(int i=0;i<x;i++)
	{
		if((s[i]-a)<=0 && (s[i]+a)>=100)
			for(int i=0;i<=100;i++)
				server[i]=1;	
				
		if((s[i]+a)>=100)
			for(int k=s[i]-a;k<=100;k++)
				server[k]=1;
		
		if((s[i]-a)<=0)
			for(int k=0;k<=s[i]+a;k++)
				server[k]=1;
	
		for(int k=s[i]-a;k<=s[i]+a;k++)
				server[k]=1;			
		
		printf("%d %d",(s[i]+a),(s[i]-a));
		
		printf("\n")		;
		
	}
	
	
	for(int i=0;i<100;i++)
		if(server[i]==0)
			c++;
	
	printf("%d",c);
	
	return 0;
	
}
