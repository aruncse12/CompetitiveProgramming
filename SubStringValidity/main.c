#include <stdio.h>
#include <string.h>
#define MAX 100
#define MAX_VALID 5

int checkValid(char str[])
{
    char validStr[MAX_VALID][MAX]={"the","there","i","am","fine"};
    int i;
    for(i=0;i<MAX_VALID;i++)
    {
        if(!strcmp(str,validStr[i]))
            return 1;
    }
    return 0;
}
int checkValidStr(char str[], int start)
{
    int i, j;
    char tempStr[MAX];
    for(i=start;i<strlen(str);i++)
    {
        memset(tempStr, '\0', sizeof(tempStr));
        strncpy(tempStr, str+start, i-start+1);
        if(checkValid(tempStr))
        {
            if(checkValidStr(str,i+1))
                return 1;
            else if (i+1>=strlen(str))
                return 1;
        }
    }
    return 0;
}
int main(int argc, char **argv)
{
    char str[MAX];
    scanf("%s",&str);
 	printf("\n%d",checkValidStr(str,0));
	return 0;
}
