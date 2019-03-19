#include <stdio.h>
int main()
{
	int a[11],i,j,t;
	for (i=0; i<=10;i++)
		a[i] = 0;  //初始化为 0 

	for (i=1;i<=5;i++)
	{
     scanf("%d",&t);  //把每一个数读到变量 t 中
	 a[t]++;    //进行计数
	}

	for (i=0;i<=10;i++)     // 一次判断 a[0] - a[10]
		for (j=1;j<=a[i];j++) //出现了几次就打印几次
			printf("%d ", i);
	getchar();getchar();
	// 这里的 getchar() 用来暂停程序， 以便查看程序输出的内容
	// 也可以用system('puse'); 来代替
	return 0;
}