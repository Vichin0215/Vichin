#include <stdio.h>
int main()
{
	int val;
	int i;
	scanf("%d",&val);
	for(i=0;i<val;i++)
	{
		if(val%i==0)
		break;
	}
	if(i==val)
	 printf("Yes!\n");
	else printf("No!");
	
	return 0; 
}

