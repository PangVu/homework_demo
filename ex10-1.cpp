#include <stdio.h>
struct Distance{
    int m;
    float cm;
};
int main(){
    struct Distance d1,d2;
    d1.m =1;
    d1.cm = 78.5;
    d2.m =1;
    d1.cm = 68.5;
    printf("your height = %d m %2.2f cm \n",d1.m,d1.cm);
    printf("Hello World");
    return 0;
}
