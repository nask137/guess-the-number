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
	printf("%s\n" ,"���ֵ�����ɣ��������������֣�");
	while (1) {
		scanf_s("%d", &gess);

		if (gess > a) {
			printf("% s \n", "�´��ˣ������¡�");
		}
		else if (gess < a) {
			printf("%s\n", "��С�ˣ������¡�");
		}
		else {
			printf("%s\n", "�¶��ˣ��������");
			break;
		}
	}
	return 0;
}