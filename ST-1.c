#include <stdio.h>
int main()
{
	int n,k=1,j=1,temp=0,m=0,arr[10] = {0};			//�����n���ܴ���10
	scanf_s("%d",&n);
	for (int i = 0; i < n; i++)
	{
		k = k * j;									//����׳�
		arr[i] = j;									//1��n��ֵ������
		j++;
	}
	for (int i = 0; i < k; i++)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d ",arr[i]);					//���1��n���������
		}
		printf("\n");
		temp = arr[m];								//�����������ֽ���λ�ã����г����е���ϣ����������ǽ׳�
		arr[m] = arr[m + 1];						//���ύ���������ʼ���У���������������������ظ�
		arr[m + 1] = temp;
		m++;
		if (m == n-1)m = 0;
	}
	return 0;
}