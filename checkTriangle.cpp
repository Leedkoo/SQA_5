#include <stdio.h>
#include <stdlib.h>

const char* checkTriangle(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            return "�ȱ�������";
        }
        else if (a == b || a == c || b == c) {
            return "����������";
        }
        else {
            return "һ��������";
        }
    }
    else {
        return "���ܹ���������";
    }
}

int main() {
    int a, b, c;
    char choice;
    int validInput = 0;

    do {
        validInput = 1;

        printf("�������һ��������: ");
        if (scanf("%d", &a) != 1) {
            printf("��������Ƿ�\n");
            while (getchar() != '\n');  // ������뻺����
            validInput = 0;
        }
        else if (a <= 0 || a > 200) {
            printf("�������볬��\n");
            validInput = 0;
        }

        if (!validInput) continue;

        printf("������ڶ���������: ");
        if (scanf("%d", &b) != 1) {
            printf("��������Ƿ�\n");
            while (getchar() != '\n');  // ������뻺����
            validInput = 0;
        }
        else if (b <= 0 || b > 200) {
            printf("�������볬��\n");
            validInput = 0;
        }

        if (!validInput) continue;

        printf("�����������������: ");
        if (scanf("%d", &c) != 1) {
            printf("��������Ƿ�\n");
            while (getchar() != '\n');  // ������뻺����
            validInput = 0;
        }
        else if (c <= 0 || c > 200) {
            printf("�������볬��\n");
            validInput = 0;
        }

        if (!validInput) continue;

        const char* result = checkTriangle(a, b, c);
        printf("%s\n", result);

    } while (1);

    return 0;
}