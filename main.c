#include<stdio.h>
//add 5 and 2
//convert 255 decimal to binary
int main()
{
    printf("Calculator program\n");
    int option, a,b,result,calctype;
    int deci,x,i=0;
    int arr[8]={0,0,0,0,0,0,0,0};
    printf("Enter the calculator type\n1.Basic Calculator\n2.Programmer\n");
    scanf("%d",&calctype);

    if(calctype == 1)
    {
            printf("Enter a option to perform a corressponding arithmatic operation \n1.Addition \n2.Subraction\n3.Division\n4.Multiplication\n");
            scanf("%d",&option);
            printf("Enter a input data\n");
            scanf("%d %d",&a,&b);
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
    }
    if(calctype == 2)
    {
        printf("Enter a 8 bit decimal\n");
        scanf("%d",&deci);
        while(deci!=0)
        {
            arr[i] = deci % 2;
            deci = deci/2;
            i++;
        } 
        for(i=7;i>=0;i--)
        {
        printf("%d",arr[i]);
        }
        printf("\n");
    }

    return 0;
}