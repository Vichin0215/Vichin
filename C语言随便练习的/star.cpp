# include <stdio.h>
int main()
{
	int a[n]=9;
	int i,j,t;

	printf("input 9 numbers:\n");
	for(n=0;n<9;n++)
		scanf("%d",&a[n]);
	//ÏÈÅÅĞò
	for(j=1;j<9;j++)
	for(i=0;i<n-j;i++)
	if(a[i+1]<a[i])
	{t=a[i+1];a[i+1]=a[i];a[i]=t;}
	//ÕÛ°ë²éÕÒ




	
	return 0;
}