# include <stdio.h>
int main()
{
   
    int i,j,t,n,x,low,high,mid;
    int a[9];

    printf("input 9 numbers:\n");
    for(n=0;n<9;n++)
        scanf("%d",&a[n]);
    printf("your number is: ");
    scanf("%d",&x);
    //������
    for(j=1;j<9;j++)
    for(i=0;i<n-j;i++)
    if(a[i+1]<a[i])
    {t=a[i+1];a[i+1]=a[i];a[i]=t;}
    //�۰����
    low=0;high=8;
      while(low<=high)
    {
    mid=(high+low)/2;
    if(x>a[mid]) low=mid+1;
    else if(x<a[mid]) high=mid-1;
    else {printf("������ڵ�%d��\n",mid+1);break;}
    }
    if(low>high) printf("���޴���!\n");
    return 0;
}