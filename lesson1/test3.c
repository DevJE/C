#include <stdio.h>

int main() {
    int a;
    int b, c;
    double da;
    char ch;
    
    a = 10;
    b = a;
    c = a + 20;
    da = 3.5;
    ch = 'A';

    printf("변수 a의 값 : %d\n", a);
    printf("변수 b의 값 : %d\n", b);
    printf("변수 c의 값 : %d\n", c);
    printf("변수 da의 값 : %.1lf\n", da);
    printf("변수 ch의 값  : %c\n", ch);

    // char
    char ch1 = 'A';
    char ch2 = 65;

    printf("ch1 : %d \n", ch1);
    printf("ch2 : %c " , ch2);

    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;

    printf("short : %d\n", sh);
    printf("int : %d\n", in);
    printf("long : %ld\n", ln);
    printf("longlong : %lld\n", lln);

    unsigned int aa;

    aa = 4294967295;
    printf("%d\n", aa);

    aa = -1;
    printf("%u\n", aa);

    float ft = 1.23457890123456789;
    double db = 1.23457890123456789;

    return 0;
}