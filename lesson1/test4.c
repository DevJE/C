// 연산자
#include <stdio.h>

int main() 
{
    // int a = 5, b = 5;
    // int pre, post;

    // pre = (++a) * 3;
    // post = (b++) * 3;

    // printf("초기값 a = %d, b = %d\n", a, b);
    // printf("전위형 : (++a) * 3 = %d, 후위형 : (b++) * 3 = %d\n", pre, post);

    int a = 10, b = 20, c = 10;
    int res;

    res = (a > b);
    printf("a > b : %d\n", res); // false 0
    
    res = (a >= b);
    printf("a >= b : %d\n", res); // false 0

    res = (a < b);
    printf("a < b : %d\n", res); // true 1

    res = (a <= b);
    printf("a <= b : %d\n", res); // true 1

    res = (a <= c);
    printf("a <= c : %d\n", res); // true 1

    res = (a == b);
    printf("a == b : %d\n", res); // false 0

    res = (a != c);
    printf("a != c : %d\n", res); // false 0

    return 0;
}