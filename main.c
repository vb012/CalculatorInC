#include<stdio.h>

int main()
{
    printf("Calculator program\n");
    int option, a,b,result;
    printf("Enter a input data\n");
    scanf("%d %d",&a,&b);
    printf("Enter a option to perform a corressponding arithmatic operation \n1.Addition \n2.Subraction\n3.Division\n4.Multiplication\n");
    scanf("%d",&option);
    
    switch (option)
    {
    case 1:
    {
        result = a + b;
        break;
    }
    case 2:
    {
        result = a-b;
        break;
    }
    case 3:
    {
        result = a/b;
        break;
    }
    case 4:
    {
        result = a*b;
        break;
    }
    default:
    {
        printf("you selected a wrong variable\n");
    }
    }
    printf("Result = %d\n\n",result);
    return 0;
}