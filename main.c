#include<stdio.h>

int main()
{
    printf("Calculator program\n");
    int option, a,b,result;
    printf("Enter a input data\n");
    scanf("%d %d",&a,&b);
    printf("Enter a option to perform a corressponding arithmatic operation \n 1.Addition \n 2.Subraction\n");
    scanf("%d",&option);
    if(option==1)
    {
        result = a + b;
    }
    else
    {
        result = a-b;
    }
    printf("Result = %d\n\n",result);
    return 0;
}