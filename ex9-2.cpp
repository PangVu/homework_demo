#include <stdio.h>
struct Distance{
    int m;
    float cm;
};
typedef struct Distance_t{
    int m;
    float cm;
} distances_t;
int main(){
    struct Distance d1,d2;
    distances_t     d3,d4;
    d1.m =1;
    d1.cm = 78.5;
    
    printf("your height = %d m %2.2f cm \n",d1.m,d1.cm);
    printf("Hello World");
    return 0;
}
