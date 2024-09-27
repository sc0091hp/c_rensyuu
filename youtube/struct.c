/*
1 : 構造体を作成。→成功
2 : 関数の引数に、構造体を用いて、配列または構造体を返却。→構造体で返却することは可能。
3 : モジュール内のstaticを作成し、モジュール内の一関数に、配列のポインタを渡すことで、staic配列の操作が可能。
*/
#include <stdio.h>
#include <stdlib.h>

struct time{
    unsigned char min;
    unsigned char sec;
    unsigned char msec;
};
typedef struct time Time;

int main(void);
Time check(Time CLOCK);
void check2(Time CLOCK, unsigned char *array);

int main(void)
{
    Time CLOCK;
    CLOCK.min = 30;
    CLOCK.sec = 20;
    CLOCK.msec = 10;
    CLOCK = check(CLOCK);
    printf("%d秒です。\n", CLOCK.sec);
    printf("%dミリ秒です。\n", CLOCK.msec);
}

Time check(Time CLOCK)
{
    static unsigned char arr[6] = {};
    arr[0] = CLOCK.min;
    arr[1] = CLOCK.sec;
    CLOCK.sec = 100;
    check2(CLOCK, arr);
    printf("%d分です。\n", arr[2]);
    return CLOCK;
}

void check2(Time CLOCK, unsigned char *arr)
{
    CLOCK.min = 1;
    arr[2] = CLOCK.min;
}