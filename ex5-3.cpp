//輸入行數呈現對應的圖像
#include <iostream>

using namespace std;

int main()
{
    int x;
    printf("請輸入您的行數:");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=0;j<i*2+1;j++){
            printf("*  ");
        }
        printf("\n");
    }
}
