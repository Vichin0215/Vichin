# include <stdio.h>
int main()
{
	int a[3] [4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int i,j;
	//输出数组内容
	for(i=0;i<3;i++){
		for(j=0;j<4;j++)
			printf("%-5d",a[i][j]);//-5d表示左对齐，占五个光标的位置 
		printf("\n");
	} 
	return 0;
}
