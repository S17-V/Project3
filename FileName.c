#include<stdio.h>
#include <string.h>
int main() {
    int a, r;
    printf("enter a integer numbers between 0 and 9999\n");

    while (1) {
        int count = scanf_s("%d", &a);
        if ((count == 0) || (count == EOF))
        {
            printf("Input error.\n");
            int r;
            while ((r = getchar()) != '\n' && r != EOF) {}
            continue;
        }
        else {
            int digits = 0;
            r = a;
            if (r == 0) {
                digits = 1;
                printf(" the number of digits is %d\n", digits);
            }
            else {
                while (r != 0) {
                    r /= 10;
                    digits++;
                }
            }
            printf(" the number of digits is %d\n", digits);

        }
        char buf[5];
        snprintf(buf, sizeof(buf), "%d", a);
        int len = (int)strlen(buf);
        for (int i = 0, j = len - 1; i < j; i++, j--) {
            char tmp = buf[i];
            buf[i] = buf[j];
            buf[j] = tmp;
        }
        printf("the number is %s\n", buf);
        break;
    }
    return 0;
}


