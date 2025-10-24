#include<stdio.h>
int n, h, m;
int main()
{
	printf("enter integer minutes:\n");
	while (1) {
		int count = scanf_s("%d",&n);
		if (count == 1) {
			break;
		}
		else {
			int c;
			while ((c = getchar()) != '\n' && c != EOF) {}
			printf("input error");
		}
	}
	h = n / 60;
	m = n % 60;
	printf("you entered: %d minutes are %d hours and %d minutes\n", n, h, m);
	return 0;
}
