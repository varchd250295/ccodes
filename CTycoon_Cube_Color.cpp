#include <bits/stdc++.h>
using namespace std;


int main()
{
	  
	
	
	char ss[7][10]={"sweet","sour","bitter","mint","cream","candy","\0"};

	
	//the first 6 locations(indices 0 to 5) contain the names of the flavors and ss[6] will contain the flavors entered by the user, one at a time

	int var[10];
	/*

	indices 0 to 5(6 elements) will hold the flavor index of the corresponding input flavor, for each line of the input. Eg. each location corresponds to one of the six input flavors

	var[6]=T (no. of test cases)
	var[7]= loop counter  (say, i)
	var[8]=loop counter	(say, j)
	var[9]= flag variable

	*/

	cin>>var[6];

	for(;var[6];var[6]=var[6]-1)
	{
		for(var[7]=0;var[7]<6;var[7]=var[7]-(-1))
		{
			scanf("%s",ss[6]);

			for(var[8]=0;var[8]<6;var[8]=var[8]-(-1))
			{
				if(strcmp(ss[6],ss[var[8]])==0)
				{
					var[var[7]]=var[8];
					break;
				}
			}
		}

		var[9]=0;


		for(var[7]=0;var[7]<6;var[7]=var[7]-(-1))
		{
			if((var[0]==var[2]&&var[2]==var[4])||(var[0]==var[2]&&var[2]==var[5])||(var[0]==var[3]&&var[3]==var[5])||(var[0]==var[3]&&var[3]==var[4])||(var[1]==var[2]&&var[2]==var[4])||(var[1]==var[2]&&var[2]==var[5])||(var[1]==var[3]&&var[3]==var[4])||(var[1]==var[3]&&var[3]==var[5]))
			{
				var[9]=1;
				break;
			}
		}

		if(var[9])
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;

	}
}

