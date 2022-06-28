#include <stdio.h>
int main()
{
    int n1,n2,input_result;
    printf("\nEnters your first num(A):");
    scanf("%d",&n1);
    printf("\nEnters your second num(B):");
    scanf("%d",&n2);
    printf("\nEnters your the result that you think will get(A+B):");
    scanf("%d",&input_result);
    if(n1+n2==input_result){
        printf("\nright");
    }

    else{
        printf("\nwrong");
    }
    return 0;
}




