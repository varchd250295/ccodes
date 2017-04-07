#include <stdio.h>
int main()
{
	// sweet=1, sour=2, bitter=3, mint=4, cream=5 and candy=6
	
	// front=0, back=1, left=2, right=3, top=4 and bottom=5
	
	int side[6];
	
	for(int i=0;i<6;i++)
		scanf("%d ",&side[i]);
		
	
	if(side[0]==side[2] && side[0]==side[4])
		printf("YES");	
		
	if(side[1]==side[2] && side[1]==side[4])
		printf("YES");
		
	if(side[1]==side[3] && side[1]==side[4])
		printf("YES");
		
	if(side[0]==side[3] && side[0]==side[4])
		printf("YES");
		
	if(side[0]==side[2] && sider[0]==side[5])
		printf("YES");
		
	if(side[1]==side[2] && side[1]==side[5])
		printf("YES");
		
    if(side[1]==side[3] && side[1]==side[5])
		printf("YES");
		
	if(side[0]==side[3] && side[0]==side[5])
		printf("YES");
		
	
	
	
	
	
	return 0;
}
