#include <stdio.h>
int main()
{
	int a[11],i,j,t;
	for (i=0; i<=10;i++)
		a[i] = 0;  //��ʼ��Ϊ 0 

	for (i=1;i<=5;i++)
	{
     scanf("%d",&t);  //��ÿһ������������ t ��
	 a[t]++;    //���м���
	}

	for (i=0;i<=10;i++)     // һ���ж� a[0] - a[10]
		for (j=1;j<=a[i];j++) //�����˼��ξʹ�ӡ����
			printf("%d ", i);
	getchar();getchar();
	// ����� getchar() ������ͣ���� �Ա�鿴�������������
	// Ҳ������system('puse'); ������
	return 0;
}