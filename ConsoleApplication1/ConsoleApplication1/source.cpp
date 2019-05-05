#include <stdio.h>
#include <Windows.h>
#include "head.h"

int main(void) {

	// 연산자 배열 선언, 연산 대상 숫자 선언, 사용자 명령용 변수
	int nums[3] = {}, usrCmd = 1;
	float height, weight, BMI;
	char operate;

	while (1) {
		system("COLOR 0F");
		printf("===================\n");
		printf("■ 환영합니다!   ■\n");
		printf("■   1.일반계산  ■\n");
		printf("■   2.BMI       ■\n");
		printf("■   3.단위변환  ■\n");
		printf("■   4.손익분기점■\n");
		printf("■   5.공학용    ■\n");
		printf("-------------------\n");
		printf("■   6.종료      ■\n");
		printf("===================\n");
		scanf("%d", &usrCmd);

		switch (usrCmd) {
		/*case 1:
			printf("계산할 숫자를 띄어쓰기 단위로 구분해 3개 입력하세요. 맨 마지막엔 연산기호를 입력하세요.");
			scanf("%d%d%d%c", &nums[0], &nums[1], &nums[2], &operate);
			switch (operate) {
			case '+':
				printf("%d", plus(nums));
				break; //while문 처음으로(switch문 벗어나기)
			case '-':
				printf("%d", minus(nums));
				break; //while문 처음으로(switch문 벗어나기)
			case '*':
				printf("%d", multi(nums));
				break; //while문 처음으로(switch문 벗어나기)
			case '/':
				printf("%d", div(nums));
				break; //while문 처음으로(switch문 벗어나기)
			}
			break;*/
		case 2:
			printf("[(키) (몸무게)] 형식으로 입력해 주세요. 키는 m단위, 몸무게는 kg단위로 입력해 주세요.");
			scanf("%f %f", &height, &weight);
			printf("===================\n");
			printf("입력하신 수치로 계산한 비만도는");
			BMI = weight / (height*height);
			if (BMI<18.5) {
				system("COLOR E0");
				printf(" %f로 저체중범위에 속합니다.\n |====|====|====|====|====|\n @====|====|====|====|====|\n |====|====|====|====|====|", BMI);
				printf("주변 병/의원에서 상담을 받아보시기 바랍니다.\n");
			}
			else if (BMI < 23.0) {
				system("COLOR 2F");
				printf(" %f로 정상범위에 속합니다.\n |====|====|====|====|====|\n |====@====|====|====|====|\n |====|====|====|====|====|\n", BMI);
			}
			else if (BMI < 25.0) {
				system("COLOR 6F");
				printf(" %f로 과체중에 속합니다.\n |====|====|====|====|====|\n |====|====@====|====|====|\n |====|====|====|====|====|\n", BMI);
			}
			else if (BMI < 30.0) {
				system("COLOR 5F");
				printf(" %f로 비만I에 속합니다.\n |====|====|====|====|====|\n |====|====|====@====|====|\n |====|====|====|====|====|\n", BMI);
				printf("주변 병/의원에서 상담을 받아보시기 바랍니다.\n");
			}
			else if (BMI < 40.0) {
				system("COLOR CF");
				printf(" %f로 비만II에 속합니다.\n |====|====|====|====|====|\n |====|====|====|====@====|\n |====|====|====|====|====|\n", BMI);
				printf("주변 병/의원에서 상담을 받아보시기 바랍니다.\n");
			}
			else if(BMI >= 40.0){
				system("COLOR 4F");
				printf(" %f로 심각한 비만III에 속합니다.\n |====|====|====|====|====|\n |====|====|====|====|====@\n |====|====|====|====|====|\n", BMI);
				printf("주변 병/의원에서 신속히 진단을 받으시기 바랍니다.");
			}
			else {
				system("cls");
				printf("키를 0으로 입력했거나 의미가 없는 숫자를 입력했습니다.\n초기화면으로 돌아갑니다.");
				Sleep(3000);
				system("cls");
				break;
			}
			printf("출처 : 아시아 - 태평양 비만진단기준(대한비만학회, 2000)\n");
			Sleep(10000);
			system("cls");
			break;

		}
		if (usrCmd == 5) {
			printf("프로그램을 종료합니다!");
			break; //프로그램 종료
		}
		else if (usrCmd == 6) {
			printf("장비를 정지합니다!\n으악 앙되잖아 앙되!\n");
			break; //프로그램 종료


		}
	}
}