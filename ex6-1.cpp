#include <stdio.h>
int main()
{
    int n1,n2,result;
    printf("\nEnters your age:");
    scanf("%d",&n1);
    printf("\nEnters your friend age:");
    scanf("%d",&n2);
    if(n1>n2){
        printf("\nYour age is higher than your friend!");
    }
    else if(n1<n2){
        printf("\nYour friend age is higher than yours!");
    }
    else{
        printf("\nTwo of you age are same!");
    }
    return 0;
}




