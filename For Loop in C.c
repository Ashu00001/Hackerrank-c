#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	char arr[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(i=a;i<=b;i++)
    {
        if(i<=9)
        {
            printf("%s\n",arr[i]);
        }
        else if(i>9 && i%2==0)
        {
            printf("even\n");
        }
        else if(i>9 && i%2!=0)
        {
            printf("odd\n");
        }
    }
    return 0;
}

