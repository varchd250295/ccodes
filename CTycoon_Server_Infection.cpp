#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;

	for(;T;T=T-1)
	{
		int arr[108]={0}; // 0-99 indices are for intended use. arr[100]=n     arr[101]=x    arr[102]=y    arr[103]- temp  arr[104]- loop counter   arr[105]- loop counter arr[106]- stores the stride    arr[107]=count

		arr[107]=0;
		scanf("%d%d%d",&arr[100],&arr[101],&arr[102]);

		for(arr[104]=0;arr[104]<arr[100];arr[104]=arr[104]-(-1))
		{
			scanf("%d",&arr[103]);
			arr[103]=arr[103]-1;

			arr[106]=0;

			for(arr[105]=0;arr[105]<arr[102];arr[105]=arr[105]-(-1))//arr[106]=arr[101]*arr[102];
			arr[106]=arr[106]+arr[101];

			for(arr[105]=0;arr[105]<100;arr[105]=arr[105]-(-1))
			{
				if((((arr[103]-arr[106])-1)<arr[105]) && arr[105]<((arr[103]-(-arr[106]))-(-1)))
				{
					arr[arr[105]]=1;
				}

			}

		}

		for(arr[104]=0;arr[104]<100;arr[104]=arr[104]-(-1))
		{
			if(arr[arr[104]]==0)
			arr[107]=arr[107]-(-1);
		}

		cout<<arr[107]<<endl;
	}

}





