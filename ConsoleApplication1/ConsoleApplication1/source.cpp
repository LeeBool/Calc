#include <stdio.h>
#include <Windows.h>
#include "head.h"

int main(void) {

	// ������ �迭 ����, ���� ��� ���� ����, ����� ��ɿ� ����
	int nums[3] = {}, usrCmd = 1;
	char operate;

	while (1) {

		printf("===================\n");
		printf("�� ȯ���մϴ�!   ��\n");
		printf("��   1.�Ϲݰ��  ��\n");
		printf("��   2.������ȯ  ��\n");
		printf("��   3.���ͺб�����\n");
		printf("��   4.���п�    ��\n");
		printf("-------------------\n");
		printf("��   5.����      ��\n");
		printf("===================\n");
		scanf("%d", &usrCmd);

		switch (usrCmd) {
		case 1:
			printf("����� ���ڸ� ���� ������ ������ 3�� �Է��ϼ���. �� �������� �����ȣ�� �Է��ϼ���.");
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
			printf("���α׷��� �����մϴ�!");
			break;
		}
		else if (usrCmd == 6) {
			printf("��� �����մϴ�!\n���� �ӵ��ݾ� �ӵ�!\n");
			break;


		}
	}
}