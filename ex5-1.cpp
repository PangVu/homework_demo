#include <iostream>
using namespace std;

int main()
{
    int a[6] = {8,3,6,10,45,12};
    int b[6] = {0};
    int i,n,x,y;
    printf("%d",x);
    
    n=sizeof(a)/sizeof(int);
    for(i=0;i<n;i++){
        printf("a[%d]=%d \n",i,a[i]);
    }
    
    for(i=0;i<n;i++){
        printf("請輸入您6位元串列表內的第%d位元的數字:",i+1);
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;i++){
        printf("b[%d]=%d \n",i,b[i]);
    }
    
    cout<<"Hello World";

    return 0;
}
