//輸入一個圓半徑（r）當r>＝0時，計算並輸出圓的面積和周長，否則，輸出提示資訊。
#include <iostream>
int main()
{
    float r;//半径
    float pi = 3.1415926535897932384626433832795;
    printf("please input your radius: \n");
    scanf("%f",&r);
    if(r>=0){
        printf("your circle areas is : %f",r*r*pi);
        printf("\n");
    }
    else{
        printf("please input a positive integer!");
    }
    return 0;
}
