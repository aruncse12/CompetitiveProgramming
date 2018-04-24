#include <stdio.h>
#include <string.h>
#define MAX 100
#define MAX_VALID 2

int checkValid(char str[])
{
    char validStr[MAX_VALID][MAX]={"the","there"};
    int i;
    for(i=0;i<MAX_VALID;i++)
    {
        if(!strcmp(str,validStr[i]));
            return 1;
    }
    return 0;
}
void checkValidStr(char str[])
{
    int i;
    char tempStr[MAX],tempi,tempSize;
    for(i=0;i<strlen(str);i++)
    {
        for(j=0;j<strlen(str);i++)
        {
            tempi=i;
            tempSize=0;
            while(tempi<=tempj&&tempSize<MAX)
            {
                tempStr[tempSize++]=str[tempi++];
            }
            tempStr[tempSize]='\0';
            if(checkValid(tempStr)))
            {
                
                return 1;
            }
        }
    }
}
int main(int argc, char **argv)
{
    char str[MAX];
    scanf("%s",str);
	printf("%d",checkValidStr(str));
	return 0;
}
