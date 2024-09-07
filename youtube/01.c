/*********************
目的:C言語のポインタを理解しただけではなく、
自らコーディングできるようにする。
課題:ドラクエのようなドラクエのようなゲームで使用されているステータス
を構造体で宣言する。
参考URL→(https://www.youtube.com/watch?v=Ss9P2zgqUeU&list=PLuBpkm98aDccidEwGkmuUyyzQLMp5vXt2&index=1)
学んだ事:strcpyの使用方法について
*********************/
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
    strcpy(dorakue.NAME, "MOMO");
    dorakue.LIFE = 60;
    dorakue.ATK = 30;
    dorakue.SPD = 10;

    printf("%s(体力:%d,ちから%d,素早さ:%d)\n", dorakue.NAME, dorakue.LIFE, dorakue.ATK, dorakue.SPD);

}