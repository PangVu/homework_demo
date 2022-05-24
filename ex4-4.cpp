/*
    某校為了不讓學生互相比較程式，所以成績上記錄的成績上僅出現等第
    
    90分（含）~100分（含）為A等
    80分（含）~90分（不含）為A等
    70分（含）~80分（不含）為A等
    60分（含）~70分（不含）為A等
    不滿60分為E等
    現給你一個成績，請你判斷出它是哪一個等第
*/

#include <iostream>
using namespace std;

int main()
{
    int score;
    printf("請輸入您的成績:");
    scanf("%d",&score);
    if(score>=90){
        printf("您的成績等第為A");
    }
    else if(score>=80){
        printf("您的成績等第為B");
    }
    else if(score>=70){
        printf("您的成績等第為C");
    }
    else if(score>=60){
        printf("您的成績等第為D");
    }
    else{
        printf("您的成績等第為E");
    }
}
