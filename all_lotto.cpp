#include <stdio.h>
#include <stdlib.h> //rand() �Լ�
#include <time.h>

#define MAX_NUM 5

int main(void)
{
	int i, j, r, random[5];

	printf("�ȳ��ϼ���! \n #���ϸ۳� �̺�Ʈ�� �����Ͻ� �е� ��� ����帳�ϴ�. \n");

	printf("�ο���� ��÷ 5�� �̰ڽ��ϴ� \n");
	printf("������ ���� �� 7������ ��ȣ�� 1~ 7 ���� �����˴ϴ� \n");


	srand(time(NULL)); //seed �� ���

	for (i = 0; i < MAX_NUM; i++) // 5�� ����
	{
	again:
		r = rand() % 7 + 1; //rand()�� 1~7 ������ ������ �߻���Ŵ
		for (j = 0; j <= i - 1; j++)
			if (r == random[j])
				goto again; //�ߺ� üũ

		random[i] = r;
	}

	for (i = 0; i < MAX_NUM; i++) // 5�� ��÷
	{
		printf(" %d \n", random[i]);
	}

	printf("\n���ϵ帳�ϴ�~~~~~ \n");

	return 0;
}