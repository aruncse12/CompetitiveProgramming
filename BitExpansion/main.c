#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100

char expand(char byteStr[], float k, float n)
{
    int i;
    char newByteStr[MAX];
    for(i=0;i<strlen(byteStr);i++)
    {
        if((i+1)*pow(2.0,k)>=n)
            break;
    }
    n-=i*pow(2.0,k);
    k--;
    if(byteStr[i]=='0')
    {
        strcpy(newByteStr,"01");
    }
    else
    {
        strcpy(newByteStr,"10");
    }
    if(k==0)
    {
        return newByteStr[(int)(n-1)];
    }
    else
        expand(newByteStr, k, n);
}

int main(int argc, char **argv)
{
	char byteStr[MAX];
    float k, n;
    scanf("%s %f %f", &byteStr, &k, &n);
    printf("\n%c",expand(byteStr, k, n));
}
