#include <stdio.h>
#include <Windows.h>
#include "head.h"

int main(void) {

	// 연산자 배열 선언, 연산 대상 숫자 선언, 사용자 명령용 변수
	int nums[3] = {}, usrCmd = 1;
	char operate;

	while (1) {

		printf("===================\n");
		printf("■ 환영합니다!   ■\n");
		printf("■   1.일반계산  ■\n");
		printf("■   2.단위변환  ■\n");
		printf("■   3.손익분기점■\n");
		printf("■   4.공학용    ■\n");
		printf("-------------------\n");
		printf("■   5.종료      ■\n");
		printf("===================\n");
		scanf("%d", &usrCmd);

		switch (usrCmd) {
		case 1:
			printf("계산할 숫자를 띄어쓰기 단위로 구분해 3개 입력하세요. 맨 마지막엔 연산기호를 입력하세요.");
			scanf("%d%d%d%c", &nums[0], &nums[1], &nums[2], &operate);
			switch (operate) {
			case '+':
				printf("%d", plus(nums));
				break;
			case '-':
				printf("%d", minus(nums));
				break;
			case '*':
				printf("%d", multi(nums));
				break;
			case '/':
				printf("%d", div(nums));
				break;
			}
			break;
		}
		if (usrCmd == 5) {
			printf("프로그램을 종료합니다!");
			break;
		}
		else if (usrCmd == 6) {
			printf("장비를 정지합니다!\n으악 앙되잖아 앙되!\n");
			break;


		}
	}
}