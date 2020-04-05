#include <stdio.h>
int main()
{
	int i;
	for(i=0; ; i++)
	{
	if(i%5==1&&i%6==5&&i%7==4&&i%11==10){
	printf("韩信至少有%d兵\n",i);
	break;}
	}
	
	return 0;
 } 