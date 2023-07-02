#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int isValidDate(int year, int month, int day) {
    if (year < 1 || year > 2050)
        return 0;
    if (month < 1 || month > 12)
        return 0;
    if (day < 1)
        return 0;

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year))
        daysInMonth[1] = 29;

    if (day > daysInMonth[month - 1])
        return 0;

    return 1;
}

void nextDay(int* year, int* month, int* day) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(*year))
        daysInMonth[1] = 29;

    if (*day < daysInMonth[*month - 1]) {
        (*day)++;
    }
    else {
        (*day) = 1;
        if (*month < 12) {
            (*month)++;
        }
        else {
            (*month) = 1;
            (*year)++;
        }
    }
}

int main() {
    int year, month, day;
    flag:
    do {
        printf("���������(1-2050): ");
        scanf("%d", &year);

        printf("�������·�(1-12): ");
        scanf("%d", &month);

        printf("����������(1-31): ");
        scanf("%d", &day);

        if (!isValidDate(year, month, day)) {
            printf("������\n");
            goto flag;
        }

        nextDay(&year, &month, &day);

        printf("�������ڵĺ�һ���ǣ�%d��%d��%d��\n", year, month, day);
    } while (1);
    return 0;
}