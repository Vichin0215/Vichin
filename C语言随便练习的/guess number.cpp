# include <stdio.h>
# define N 10 
int main()
{
	int i,a[N],sum=0;
	for(i=0;i<N;i++){
	scanf("%d ",&a[i]);
	while(a[i]==0||a[i]<0) break;
	}
	if(a[i]%2!=0) sum+=a[i];
	printf("%d\n",sum);
	return 0;
 } 
