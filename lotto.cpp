#include <stdio.h>
#include <stdlib.h> //rand() 함수
#include <time.h>

#define MAX_NUM 2

int main(void)
{
	int i, j, r, random[2];

	printf("안녕하세요! \n #인하멍냥 이벤트에 참여하신 분들 모두 감사드립니다. \n");

	printf("전체대상 추첨 2명 뽑겠습니다 \n");
	printf("참가자 수는 부문별 당첨자 제외 총 3명으로 번호는 1~ 3 까지 생성됩니다 \n");


	srand(time(NULL)); //seed 값 사용

	for (i = 0; i < MAX_NUM; i++) // 2번 실행
	{
	again:
		r = rand() % 3 + 1; //rand()는 1~3 범위의 난수를 발생시킴
		for (j = 0; j <= i - 1; j++)
			if (r == random[j])
				goto again; //중복 체크

		random[i] = r;
	}

	for (i = 0; i < MAX_NUM; i++) // 2명 추첨
	{
		printf(" %d \n", random[i]);
	}

	printf("\n축하드립니다~~~~~ \n");

	return 0;
}