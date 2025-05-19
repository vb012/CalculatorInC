//input FB1AE
//output find the pattern 3 

#include<stdio.h> 
int converttobinary(char*);
int data[20];
int occur=0,x = 0;;
  char arr[5]= {'F','B','1','A','E'};
int main()
{
  int res = 0;
  res = converttobinary(arr);
  if(res ==1)
  {
      printf("\nConversion is done\n");
  }
  else
  {
      printf("\nconversion is not done\n");
  }
    
    for(int i=0;i<20;i++)
    {
       // printf(" %d ",data[i]);
         if(data[i] == 1 && data[i+1] == 1)
          {
              //printf("Occur ");
              occur = occur + 1;
              i = i+2;
           }
    }
    
    printf(" \n%d Occur",occur);
    
    // while(x<20)
    // {
    //     if(data[x] == 1 && data[x+1] == 1)
    //     {
    //         printf("Occur ");
    //         occur = occur + 1;
    //         x = x+2;
    //     }
    // }
}

int converttobinary(char data2[5])
{
    int j=0;
    for(int i=0;i<5;i++)
    {
        switch (data2[i])
        {
        case '0':
            data[j] = 0;
            data[j+1]= 0;
            data[j+2]= 0;
            data[j+3]= 0;
            j= j+4;
            printf("0000 ");
            break;
        case '1':
            data[j]  = 0;
            data[j+1]= 0;
            data[j+2]= 0;
            data[j+3]= 1;
            j= j+4;
            printf("0001 ");
            break;
        case '2':
            data[j]  = 0;
            data[j+1]= 0;
            data[j+2]= 1;
            data[j+3]= 0;
            j= j+4;
            printf("0010 ");
            break;
        case '3':
            data[j]  = 0;
            data[j+1]= 0;
            data[j+2]= 1;
            data[j+3]= 1;
            j= j+4;
            printf("0011 ");
            break;
        case '4':            
            data[j]  = 0;
            data[j+1]= 1;
            data[j+2]= 0;
            data[j+3]= 0;
            j= j+4;
            printf("0100 ");
            break;
        case '5':
            data[j]  = 0;
            data[j+1]= 1;
            data[j+2]= 0;
            data[j+3]= 1;
            j= j+4;
            printf("0101 ");
            break;
        case '6':
            data[j]  = 0;
            data[j+1]= 1;
            data[j+2]= 1;
            data[j+3]= 0;
            j= j+4;
            printf("0110 ");
            break;
        case '7':
            data[j]  = 0;
            data[j+1]= 1;
            data[j+2]= 1;
            data[j+3]= 1;
            j= j+4;
            printf("0111 ");
            break;
        case '8':
            data[j]  = 1;
            data[j+1]= 0;
            data[j+2]= 0;
            data[j+3]= 0;
            j= j+4;
            printf("1000 ");
            break;
        case '9':
            data[j]  = 1;
            data[j+1]= 0;
            data[j+2]= 0;
            data[j+3]= 1;
            j= j+4;
            printf("1001 ");
            break;
        case 'A':
            data[j]  = 1;
            data[j+1]= 0;
            data[j+2]= 1;
            data[j+3]= 0;
            j= j+4;
            printf("1010 ");
            break;
        case 'B':
            data[j]  = 1;
            data[j+1]= 0;
            data[j+2]= 1;
            data[j+3]= 1;
            j= j+4;
            printf("1011 ");
            break;
        case 'C':
            data[j]  = 1;
            data[j+1]= 1;
            data[j+2]= 0;
            data[j+3]= 0;
            j= j+4;
            printf("1100 ");
            break;
        case 'D':
            data[j]  = 1;
            data[j+1]= 1;
            data[j+2]= 0;
            data[j+3]= 1;
            j= j+4;
            printf("1101 ");
            break;
        case 'E':
            data[j]  = 1;
            data[j+1]= 1;
            data[j+2]= 1;
            data[j+3]= 0;
            j= j+4;
            printf("1110 ");
            break;
        case 'F':
            data[j]  = 1;
            data[j+1]= 1;
            data[j+2]= 1;
            data[j+3]= 1;
            j= j+4;
            //data="1111";
            printf("1111 ");
            break;
        default:
            printf("invalid hex");
            break;
    }
    }
    return 1;    
}