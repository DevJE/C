#include <stdio.h>

int main() {
    int a, b;
    int sum, sub, mul, inv;

    a = 10;
    b = 20;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    inv = -a;

    printf("a의 값 : %d, b의 값 : %d\n", a, b);
    printf("a의 음수 연산 : %d\n", inv);

    double apple;
    int banana;
    int orange;

    apple = 5.0 / 2.0;
    banana = 5 / 2;
    orange = 5 % 2;

    printf("apple : %.1lf\n", apple);
    printf("banana : %d\n", banana);
    printf("orange : %d\n", orange);

    return 0;
}