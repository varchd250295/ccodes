#include <bits/stdc++.h>

using namespace std;

int main()
{
	long num=0;
	char str[10];
	int flag;
	
	
	
	
	
	
	while(1)
	{
		num=0;
		cin>>str;
		
		flag=0;
		
		if(strlen(str)>14)
		{
			cout<<"Invalid input"<<endl;
			continue;
		}
		
		for(int i=0;i<strlen(str);i++)
		{
			num=num*10 + ((int)str[i]-48);
			
			if(!isdigit(str[i]))
			{
				flag=1;
				break;
			}
		}
		
		if(flag==1)
		{
			cout<<"Invalid Output"<<endl;
			continue;
		}
		
		if(num<7872448)
		cout<<"YES"<<endl;
		else if(num==7872448)
		cout<<"BINGO"<<endl;
		else
		cout<<"NO"<<endl;
		
	}
		
		
}
