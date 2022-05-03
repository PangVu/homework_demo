#include <iostream>
int main()
{
    int i1;//整数1
    int i2;//整数2
    
    printf("please input your first integer: \n");
    scanf("%d",&i1);
    printf("your first input integer is : %d\n",i1);
    printf("\n");
    
    printf("please input your second integer: \n");
    scanf("%d",&i2);
    printf("your second input integer is : %d\n",i2);
    printf("\n");
    
    printf("Then,your sum of squares is：%d",(i1*i1)+(i2*i2));

        
    return 0;
}
