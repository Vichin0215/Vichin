#include <stdio.h>
#define N 5
int main ()
{  
	int a[N],i,j,t;
	printf("请输入您的数:");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=1;j<N;j++)
	for(i=0;i<N-j;i++) 
		if(a[i+1]<a[i])
		{
			t=a[i+1];a[i+1]=a[i];a[i]=t;
		}
	printf("升序排列后是:");
	for(i=0;i<N;i++)
	printf("%d ",a[i]); 
    return 0;	
} 
