#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			if (i == 1 || j == 1 || i == num || j == num) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}