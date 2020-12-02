#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int age;
    double height;

    // printf("나이와 키를 입력하세요 : ");
    // scanf("%d%lf", &age, &height);
    // printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

    char grade;
    char name[20];

    // printf("학점 입력 : ");
    // scanf("%c", &grade);
    // printf("이름 입력 : ");
    // scanf("%s", name);
    // printf("%s의 학점은 %c입니다.\n", name, grade);

    char ch;

    printf("입력 : ");
    scanf("%c", &ch);
    printf("%c문자의 아스키 코드 값은 %d입니다.\n", ch, ch);

    return 0;
}