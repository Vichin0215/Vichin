# include<stdio.h>
int main ()
{
	int n,i=1,sum=0;
	printf("n=");
	scanf("%d",&n);
	while(i<=n)
	{ 
	  if((i%3==0)||(i%7==0)) sum+=i; 
	  i++;
	}
	printf("%d\n",sum);
	return 0;
 } 
