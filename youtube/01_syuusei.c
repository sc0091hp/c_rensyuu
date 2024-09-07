/*
できたこと
1 : &をつけることで、変数のアドレスを知る事ができる。
2 : scanfを使用する際に、scanfではアドレスに数値や文字を受け取る。
その際に、数値の場合&がいるが、文字列の場合&は不要である。
その理由として、文字列(配列)の場合には、配列の最初の要素数のアドレスをしているから。
*/
#include <stdio.h>
#include <string.h>

struct tokutyou
{
    char NAME[5];
    int LIFE;
    int ATK;
    int SPD;
};

struct tokutyou dorakue;

void main(void){
    struct tokutyou dorakue;
    printf("名前 > ");
    scanf("%s", dorakue.NAME);
    printf("\n");
    printf("体力 > ");
    scanf("%d", &dorakue.LIFE);
    printf("ちから > ");
    scanf("%d", &dorakue.ATK);
    printf("すばやさ > ");
    scanf("%d", &dorakue.SPD);
    dorakue.LIFE = 60;
    dorakue.ATK = 30;
    dorakue.SPD = 10;
    printf("%s(体力:%d,ちから%d,素早さ:%d)\n", dorakue.NAME, dorakue.LIFE, dorakue.ATK, dorakue.SPD);
}