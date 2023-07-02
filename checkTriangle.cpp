#include <stdio.h>
#include <stdlib.h>

const char* checkTriangle(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            return "等边三角形";
        }
        else if (a == b || a == c || b == c) {
            return "等腰三角形";
        }
        else {
            return "一般三角形";
        }
    }
    else {
        return "不能构成三角形";
    }
}

int main() {
    int a, b, c;
    char choice;
    int validInput = 0;

    do {
        validInput = 1;

        printf("请输入第一个正整数: ");
        if (scanf("%d", &a) != 1) {
            printf("参数输入非法\n");
            while (getchar() != '\n');  // 清空输入缓冲区
            validInput = 0;
        }
        else if (a <= 0 || a > 200) {
            printf("参数输入超限\n");
            validInput = 0;
        }

        if (!validInput) continue;

        printf("请输入第二个正整数: ");
        if (scanf("%d", &b) != 1) {
            printf("参数输入非法\n");
            while (getchar() != '\n');  // 清空输入缓冲区
            validInput = 0;
        }
        else if (b <= 0 || b > 200) {
            printf("参数输入超限\n");
            validInput = 0;
        }

        if (!validInput) continue;

        printf("请输入第三个正整数: ");
        if (scanf("%d", &c) != 1) {
            printf("参数输入非法\n");
            while (getchar() != '\n');  // 清空输入缓冲区
            validInput = 0;
        }
        else if (c <= 0 || c > 200) {
            printf("参数输入超限\n");
            validInput = 0;
        }

        if (!validInput) continue;

        const char* result = checkTriangle(a, b, c);
        printf("%s\n", result);

    } while (1);

    return 0;
}