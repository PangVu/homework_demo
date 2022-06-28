#include <stdio.h>
float time_to_hour(float a, float b); // function prototype

int main()
{
    float n1,n2,time;
    printf("\nEnters your hours: ");
    scanf("%f",&n1);
    printf("\nEnters your minutes: ");
    scanf("%f",&n2);
    time = time_to_hour(n1, n2);
    printf("\nYour time(hour format)is = %2.2f\n",time);
    return 0;
}

float time_to_hour(float a, float b)         // function definition   
{
    float result;
    result = a+b/60;
    return result;                     
    //return statement
}


