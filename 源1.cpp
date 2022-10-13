#define _CRT_SECURE_NO_WARNINGS  1
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main() {
	int a = 0;
	int gess = 0;
	srand((unsigned)time(NULL));
	int b = rand();
	a = b % 100;
	printf("%s\n" ,"随机值已生成，请输入所猜数字！");
	while (1) {
		scanf_s("%d", &gess);

		if (gess > a) {
			printf("% s \n", "猜大了！继续猜。");
		}
		else if (gess < a) {
			printf("%s\n", "猜小了！继续猜。");
		}
		else {
			printf("%s\n", "猜对了，你真棒！");
			break;
		}
	}
	return 0;
}