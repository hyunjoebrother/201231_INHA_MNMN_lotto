#include <stdio.h>
#include <stdlib.h> //rand() �Լ�
#include <time.h>

#define MAX_NUM 2

int main(void)
{
	int i, j, r, random[2];

	printf("�ȳ��ϼ���! \n #���ϸ۳� �̺�Ʈ�� �����Ͻ� �е� ��� ����帳�ϴ�. \n");

	printf("��ü��� ��÷ 2�� �̰ڽ��ϴ� \n");
	printf("������ ���� �ι��� ��÷�� ���� �� 3������ ��ȣ�� 1~ 3 ���� �����˴ϴ� \n");


	srand(time(NULL)); //seed �� ���

	for (i = 0; i < MAX_NUM; i++) // 2�� ����
	{
	again:
		r = rand() % 3 + 1; //rand()�� 1~3 ������ ������ �߻���Ŵ
		for (j = 0; j <= i - 1; j++)
			if (r == random[j])
				goto again; //�ߺ� üũ

		random[i] = r;
	}

	for (i = 0; i < MAX_NUM; i++) // 2�� ��÷
	{
		printf(" %d \n", random[i]);
	}

	printf("\n���ϵ帳�ϴ�~~~~~ \n");

	return 0;
}