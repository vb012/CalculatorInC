#include<stdio.h>
#include<string.h>
int result,option,count = 0;
int a = 6,b =2;
char res[20];
char add[20] = "add";
char sub[20] = "subtract";
char mul[20] = "multiply";
char division[20] = "divide";

int main()
{
    char arr[20];
    printf("Enter input\n");
    scanf("%[^\n]s",arr);
    printf("%s\n",arr);

    for(int i =0;i<20;i++)
    {

        if(arr[i]==' ')
        {
            break;
        }
        res[i] = arr[i];
        count ++;
    }
    a = arr[count + 1];
    b = arr[count + 5];

    printf("\n%d\n",a -'0');
    printf("\n%d\n",b -'0');

    printf("%s\n",res);
     if(strcmp(add,res)==0)
    {
         option = 1;
    }
    else if(strcmp(sub,res)==0)
    {
        option = 2;
    }
    else if(strcmp(mul,res)==0)
    {
        option = 4;
    }
    else if(strcmp(division,res)==0)
    {
        option = 3;
    }
    

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

    
    printf("%d",result);
    return 0;
}