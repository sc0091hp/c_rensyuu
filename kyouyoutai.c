/******************************************
https://www.youtube.com/watch?v=AdSgN_Z719Q
このURLを参考にして演習
*****************************************/
#include <stdio.h>
union person{
    char name[16];
    int age;
};

int main(){
    union person Tanaka={"Tanaka"};
    int ans;
    ans = sizeof(Tanaka);
    printf("%d\n", ans);
    printf("%s\n", Tanaka.name);
    Tanaka.age = 10000;
    ans = sizeof(Tanaka);
    printf("%d\n", ans);
    printf("%d\n", Tanaka.age);
}