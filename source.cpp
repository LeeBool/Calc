#include <stdio.h>
#include <Windows.h>
#include "head.h"

int main(void) {

	// ������ �迭 ����, ���� ��� ���� ����, ����� ��ɿ� ����
	int usrCmd = 1, metors, operate, Sales, change, fixed, expert,expOper;
	float height, weight, BMI, length, nums[3] = {};

	while (1) {
		system("COLOR 0F");
		printf("===================\n");
		printf("��   ��Ȱ����  ��\n");
		printf("-------------------\n");
		printf("��   1.�Ϲݰ��  ��\n");
		printf("��   2.BMI       ��\n");
		printf("��   3.���̺�ȯ  ��\n");
		printf("-------------------\n");
		printf("     ��������    \n");
		printf("-------------------\n");
		printf("��   4.���ͺб�����\n");
		printf("��   5.���п�    ��\n");
		printf("-------------------\n");
		printf("��   6.����      ��\n");
		printf("===================\n");
		scanf("%d", &usrCmd);

		switch (usrCmd) {
		case 1:
			printf("[(����) (����) (����) (�����ڵ�)]�������� �Է��ϼ���. \"�����ڵ� - +:1,-:2,*:3,/:4\"\n");
			scanf("%f%f%f%d", &nums[0], &nums[1], &nums[2], &operate);
			switch (operate) {
			case 1:
				printf("��� : %.5lf\n", plus(nums));
				Sleep(5000);
				system("cls");
				break;
			case 2:
				printf("��� : %.5lf\n", minus(nums));
				Sleep(5000);
				system("cls");
				break;
			case 3:
				printf("��� : %.5lf\n", multi(nums));
				Sleep(5000);
				system("cls");
				break;
			case 4:
				printf("��� : %.5lf\n", div(nums));
				Sleep(5000);
				system("cls");
				break;
			}

			break;
		case 2:
			printf("[(Ű) (������)] �������� �Է��� �ּ���. Ű�� m����, �����Դ� kg������ �Է��� �ּ���.");
			scanf("%f %f", &height, &weight);
			system("cls");
			printf("�Է��Ͻ� ��ġ�� ����� �񸸵���");
			BMI = weight / (height*height);
			if (BMI < 18.5) {
				system("COLOR E0");
				printf(" %f�� ��ü�߹����� ���մϴ�.\n |====|====|====|====|====|\n @====|====|====|====|====|\n |====|====|====|====|====|\n", BMI);
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
			else if (BMI >= 40.0) {
				system("COLOR 4F");
				printf(" %f�� �ɰ��� ��III�� ���մϴ�.\n |====|====|====|====|====|\n |====|====|====|====|====@\n |====|====|====|====|====|\n", BMI);
				printf("�ֺ� ��/�ǿ����� �ż��� ������ �����ñ� �ٶ��ϴ�.");
			}
			else {

				printf("Ű�� 0���� �Է��߰ų� �ǹ̰� ���� ���ڸ� �Է��߽��ϴ�.\n�ʱ�ȭ������ ���ư��ϴ�.");
				Sleep(3000);
				system("cls");
				break;
			}
			printf("��ó : �ƽþ� - ����� �����ܱ���(���Ѻ���ȸ, 2000)\n");
			Sleep(10000);
			system("cls");
			break;
		case 3:
			printf("[(����) (�����ڵ�)] �������� �Է��� �ּ���. \" mm:1|cm:2|m:3|km:4|inch:0\" ");
			scanf("%f %d", &length, &metors);
			if (metors == 0) {
				printf("���͹� ����� ����帳�ϴ�\n�и����� : %.5lf, ��Ƽ���� : %.5lf, ���� : %.5lf", length * 25.4, length *2.54, length*0.0254);
			}
			else if (metors == 1) {
				printf("��Ƽ���� : %.5lf, ���� : %.5lf, ��ġ: %.5lf", length / 10.0, length / 1000.0, length*0.03937);
			}
			else if (metors == 2) {
				printf("�и����� : %.5lf, ���� : %.5lf, ��ġ: %.5lf", length*10.0, length / 100.0, length*0.393701);
			}
			else if (metors == 3) {
				printf("�и����� : %.5lf, ��Ƽ���� : %.5lf, ų�ι��� : %.5lf ��ġ: %.5lf", length*1000.0, length * 100.0, length / 1000.0, length*39.370079);

			}
			else if (metors == 4) {
				printf("���� : %.5lf, ��ġ : %.5lf", length*1000.0, length *39370.0787);
			}
			else {
				printf("�ǹ̰� ���� ���ڸ� �Է��߽��ϴ�.\n�ʱ�ȭ������ ���ư��ϴ�.");
				break;
			}
			Sleep(5000);
			system("cls");
			break;
		/*case 4:
			printf("�����, ������, ������ ����� ������ ���ʷ� �Է��ϼ���");
			scanf("%d%d%d", &Sales, &change, &fixed);
			printf("����� : %d, ������ : %d, ������ : %d %d", Sales, change, fixed, fixed / (1 - (change/ Sales)));
			Sleep(5000);
			system("cls");
			break;
			*/
		case 5:
			printf("�������� ���׿����� �����մϴ�. [(����)(�����ڵ�)]�������� �Է��ϼ���. \"�����ȣ�ڵ� - factorial : 1, ���� : 2\"");
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
			printf("���α׷��� �����մϴ�!");
			break; //���α׷� ����
		}
		else if (usrCmd == 7) {
			system("cls");
			Sleep(1000);
			egg();
			break; //���α׷� ����
		}
	}
}
