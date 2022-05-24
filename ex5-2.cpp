//99乘法表列印
#include <iostream>

using namespace std;

int main()
{
    printf("乘法表\n");
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            printf("%dx%d=%2d  ",j,i,i*j);
        }
        printf("\n");
    }
}
