#include <stdio.h>
int main()
{
	int state=0,i;
	char str[100],sym;
	printf("enter string of 0s and 1s \n");
	scanf("%s",str);
	
	sym=str[0];
	
	for(i=1;str[i]!='\0';i++)
	{
		if(state==0)
		{
			if(str[i]==sym) state=1;
			else		state=0;
			printf("\n state 0 to state %d",state);
		}
		else
		if(state==1)
		{
			if(str[i]==sym) state=1;
			else		state=0;
			printf("\n state 1 to state %d",state);
		}
	}
	if(state==1)
		printf("SUCCESS. FINAL STATE REACHED");
	else
		printf("\n FAILURE. TRAP STATE REACHED");
}
		
