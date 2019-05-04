#include <stdio.h>

int plus(int* arr) {
	int rst = 0;
	for (int i = 0; i < 3; i++) {
		rst += arr[i];
	}
	return rst;
}

int minus(int* arr) {
	int rst = arr[0];
	for (int i = 1; i < 3; i++) {
		rst -= arr[i];
	}
	return rst;
}

int multi(int* arr) {
	int rst = 1;
	for (int i = 0; i < 3; i++) {
		rst *= arr[i];
	}
	return rst;
}

int div(int* arr) {
	int rst = arr[0];
	for (int i = 1; i < 3; i++) {
		rst /= arr[i];
	}
	return rst;
}