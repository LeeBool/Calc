#include <stdio.h>
#include <Windows.h>
#include "head.h"

int main(void) {

	// ������ �迭 ����, ���� ��� ���� ����, ����� ��ɿ� ����
	int nums[3] = {}, usrCmd = 1;
	float height, weight, BMI;
	char operate;

	while (1) {
		system("COLOR 0F");
		printf("===================\n");
		printf("�� ȯ���մϴ�!   ��\n");
		printf("��   1.�Ϲݰ��  ��\n");
		printf("��   2.BMI       ��\n");
		printf("��   3.������ȯ  ��\n");
		printf("��   4.���ͺб�����\n");
		printf("��   5.���п�    ��\n");
		printf("-------------------\n");
		printf("��   6.����      ��\n");
		printf("===================\n");
		scanf("%d", &usrCmd);

		switch (usrCmd) {
		/*case 1:
			printf("����� ���ڸ� ���� ������ ������ 3�� �Է��ϼ���. �� �������� �����ȣ�� �Է��ϼ���.");
			scanf("%d%d%d%c", &nums[0], &nums[1], &nums[2], &operate);
			switch (operate) {
			case '+':
				printf("%d", plus(nums));
				break; //while�� ó������(switch�� �����)
			case '-':
				printf("%d", minus(nums));
				break; //while�� ó������(switch�� �����)
			case '*':
				printf("%d", multi(nums));
				break; //while�� ó������(switch�� �����)
			case '/':
				printf("%d", div(nums));
				break; //while�� ó������(switch�� �����)
			}
			break;*/
		case 2:
			printf("[(Ű) (������)] �������� �Է��� �ּ���. Ű�� m����, �����Դ� kg������ �Է��� �ּ���.");
			scanf("%f %f", &height, &weight);
			printf("===================\n");
			printf("�Է��Ͻ� ��ġ�� ����� �񸸵���");
			BMI = weight / (height*height);
			if (BMI<18.5) {
				system("COLOR E0");
				printf(" %f�� ��ü�߹����� ���մϴ�.\n |====|====|====|====|====|\n @====|====|====|====|====|\n |====|====|====|====|====|", BMI);
				printf("�ֺ� ��/�ǿ����� ����� �޾ƺ��ñ� �ٶ��ϴ�.\n");
			}
			else if (BMI < 23.0) {
				system("COLOR 2F");
				printf(" %f�� ��������� ���մϴ�.\n |====|====|====|====|====|\n |====@====|====|====|====|\n |====|====|====|====|====|\n", BMI);
			}
			else if (BMI < 25.0) {
				system("COLOR 6F");
				printf(" %f�� ��ü�߿� ���մϴ�.\n |====|====|====|====|====|\n |====|====@====|====|====|\n |====|====|====|====|====|\n", BMI);
			}
			else if (BMI < 30.0) {
				system("COLOR 5F");
				printf(" %f�� ��I�� ���մϴ�.\n |====|====|====|====|====|\n |====|====|====@====|====|\n |====|====|====|====|====|\n", BMI);
				printf("�ֺ� ��/�ǿ����� ����� �޾ƺ��ñ� �ٶ��ϴ�.\n");
			}
			else if (BMI < 40.0) {
				system("COLOR CF");
				printf(" %f�� ��II�� ���մϴ�.\n |====|====|====|====|====|\n |====|====|====|====@====|\n |====|====|====|====|====|\n", BMI);
				printf("�ֺ� ��/�ǿ����� ����� �޾ƺ��ñ� �ٶ��ϴ�.\n");
			}
			else if(BMI >= 40.0){
				system("COLOR 4F");
				printf(" %f�� �ɰ��� ��III�� ���մϴ�.\n |====|====|====|====|====|\n |====|====|====|====|====@\n |====|====|====|====|====|\n", BMI);
				printf("�ֺ� ��/�ǿ����� �ż��� ������ �����ñ� �ٶ��ϴ�.");
			}
			else {
				system("cls");
				printf("Ű�� 0���� �Է��߰ų� �ǹ̰� ���� ���ڸ� �Է��߽��ϴ�.\n�ʱ�ȭ������ ���ư��ϴ�.");
				Sleep(3000);
				system("cls");
				break;
			}
			printf("��ó : �ƽþ� - ����� �����ܱ���(���Ѻ���ȸ, 2000)\n");
			Sleep(10000);
			system("cls");
			break;

		}
		if (usrCmd == 5) {
			printf("���α׷��� �����մϴ�!");
			break; //���α׷� ����
		}
		else if (usrCmd == 6) {
			printf("��� �����մϴ�!\n���� �ӵ��ݾ� �ӵ�!\n");
			break; //���α׷� ����


		}
	}
}