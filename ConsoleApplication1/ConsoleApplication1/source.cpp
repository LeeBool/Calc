#include <stdio.h>
#include <Windows.h>
#include "head.h"

int main(void) {

	// 연산자 배열 선언, 연산 대상 숫자 선언, 사용자 명령용 변수
	int usrCmd = 1, metors, operate, Sales, change, fixed, expert,expOper;
	float height, weight, BMI, length, nums[3] = {};

	while (1) {
		system("COLOR 0F");
		printf("===================\n");
		printf("■   생활계산기  ■\n");
		printf("-------------------\n");
		printf("■   1.일반계산  ■\n");
		printf("■   2.BMI       ■\n");
		printf("■   3.길이변환  ■\n");
		printf("-------------------\n");
		printf("     전문가용    \n");
		printf("-------------------\n");
		printf("■   4.손익분기점■\n");
		printf("■   5.공학용    ■\n");
		printf("-------------------\n");
		printf("■   6.종료      ■\n");
		printf("===================\n");
		scanf("%d", &usrCmd);

		switch (usrCmd) {
		case 1:
			printf("[(숫자) (숫자) (숫자) (연산코드)]형식으로 입력하세요. \"연산코드 - +:1,-:2,*:3,/:4\"\n");
			scanf("%f%f%f%d", &nums[0], &nums[1], &nums[2], &operate);
			switch (operate) {
			case 1:
				printf("결과 : %.5lf\n", plus(nums));
				Sleep(5000);
				system("cls");
				break;
			case 2:
				printf("결과 : %.5lf\n", minus(nums));
				Sleep(5000);
				system("cls");
				break;
			case 3:
				printf("결과 : %.5lf\n", multi(nums));
				Sleep(5000);
				system("cls");
				break;
			case 4:
				printf("결과 : %.5lf\n", div(nums));
				Sleep(5000);
				system("cls");
				break;
			}

			break;
		case 2:
			printf("[(키) (몸무게)] 형식으로 입력해 주세요. 키는 m단위, 몸무게는 kg단위로 입력해 주세요.");
			scanf("%f %f", &height, &weight);
			system("cls");
			printf("입력하신 수치로 계산한 비만도는");
			BMI = weight / (height*height);
			if (BMI < 18.5) {
				system("COLOR E0");
				printf(" %f로 저체중범위에 속합니다.\n |====|====|====|====|====|\n @====|====|====|====|====|\n |====|====|====|====|====|\n", BMI);
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
			else if (BMI >= 40.0) {
				system("COLOR 4F");
				printf(" %f로 심각한 비만III에 속합니다.\n |====|====|====|====|====|\n |====|====|====|====|====@\n |====|====|====|====|====|\n", BMI);
				printf("주변 병/의원에서 신속히 진단을 받으시기 바랍니다.");
			}
			else {

				printf("키를 0으로 입력했거나 의미가 없는 숫자를 입력했습니다.\n초기화면으로 돌아갑니다.");
				Sleep(3000);
				system("cls");
				break;
			}
			printf("출처 : 아시아 - 태평양 비만진단기준(대한비만학회, 2000)\n");
			Sleep(10000);
			system("cls");
			break;
		case 3:
			printf("[(길이) (단위코드)] 형식으로 입력해 주세요. \" mm:1|cm:2|m:3|km:4|inch:0\" ");
			scanf("%f %d", &length, &metors);
			if (metors == 0) {
				printf("미터법 사용을 권장드립니다\n밀리미터 : %.5lf, 센티미터 : %.5lf, 미터 : %.5lf", length * 25.4, length *2.54, length*0.0254);
			}
			else if (metors == 1) {
				printf("센티미터 : %.5lf, 미터 : %.5lf, 인치: %.5lf", length / 10.0, length / 1000.0, length*0.03937);
			}
			else if (metors == 2) {
				printf("밀리미터 : %.5lf, 미터 : %.5lf, 인치: %.5lf", length*10.0, length / 100.0, length*0.393701);
			}
			else if (metors == 3) {
				printf("밀리미터 : %.5lf, 센티미터 : %.5lf, 킬로미터 : %.5lf 인치: %.5lf", length*1000.0, length * 100.0, length / 1000.0, length*39.370079);

			}
			else if (metors == 4) {
				printf("미터 : %.5lf, 인치 : %.5lf", length*1000.0, length *39370.0787);
			}
			else {
				printf("의미가 없는 숫자를 입력했습니다.\n초기화면으로 돌아갑니다.");
				break;
			}
			Sleep(5000);
			system("cls");
			break;
		/*case 4:
			printf("매출액, 변동비, 고정비를 띄어쓰기로 구분해 차례로 입력하세요");
			scanf("%d%d%d", &Sales, &change, &fixed);
			printf("매출액 : %d, 변동비 : %d, 고정비 : %d %d", Sales, change, fixed, fixed / (1 - (change/ Sales)));
			Sleep(5000);
			system("cls");
			break;
			*/
		case 5:
			printf("전문적인 단항연산을 수행합니다. [(숫자)(연산코드)]형식으로 입력하세요. \"연산기호코드 - factorial : 1, 제곱 : 2\"");
			scanf("%d%d", &expert, &expOper);
			if (expOper == 1) {
				printf("%d", fact(expert));
			}
			else if (expOper == 2) {
				printf("%d", expert*expert);
			}
			Sleep(5000);
			system("cls");
			break;
		}
		if (usrCmd == 6) {
			printf("프로그램을 종료합니다!");
			break; //프로그램 종료
		}
		else if (usrCmd == 7) {
			system("cls");
			Sleep(1000);
			egg();
			break; //프로그램 종료
		}
	}
}
