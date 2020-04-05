#include <stdio.h>
int main()
{
	int K,N,i,j,t,count=1;
	scanf("%d %d",&N,&K);
	int a[N];
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(j=1;j<N;j++)
	for(i=0;i<N-j;i++){
	if(a[i+1]<a[i]) 
	{t=a[i+1];a[i+1]=a[i];a[i]=t;}
	if(j==K){
		for(i=0;i<N;i++)
	printf("%d ",a[i]);
	}
	}
	//for(i=0;i<N;i++)
	//printf("%d ",a[i]);
	
	return 0;
	 } 
