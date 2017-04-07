#include <stdio.h>
#include <cstdio>

fastRead(long long int *a)
{
		char c=0;
		while (c<33) c=getchar_unlocked();
		*a=0;
		while (c>33)
		{
			 *a=*a*10+c-'0';
			 c=getchar_unlocked();
		}
}

int main()
{
	long long *t;
	printf ("Enter number");
	fastRead(&t);
	printf("%d",t);
}
