#include <iostream>
int main()
{
    int year;//年份
    printf("請輸入您欲查詢是否閏年的年份: \n");
    scanf("%i",&year);
    if((year%4==0 && year%100!=0)||(year%400==0)){
        printf("是閏年");
        printf("\n");
    }
    else{
        printf("不是閏年");
    }
    return 0;
}
