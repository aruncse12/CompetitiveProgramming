#include <stdio.h>
#define MAX 10
int checkIfAllItemCanBeEaten(long long int arrW[], long long int n, long long int max)
{
    long long int i;
    for(i=0;i<n;i++)
        if(arrW[i]>max)
            return 0;
    return 1;
}
int checkAllEaten(long long int arrC[], long long int n)
{
    long long int i;
    for(i=0;i<n;i++)
        if(arrC[i]>0)
            return 0;
    return 1;
}
long long int findMax(long long int arrW[], long long arrC[], long long int n, long long int cap)
{
    long long int i, max=0, maxindex=0;
    for(i=0;i<n;i++)
    {
        if(max<arrW[i]&&arrW[i]<=cap&&arrC[i]>0)
        {
            max=arrW[i];
            maxindex=i;
        }
    }
    if(arrC[maxindex]>0)
        return maxindex;
    else
        return -1;
}
long long int findMaxLeftOut(long long int arrW[], long long arrC[], long long int n, long long int cap)
{
    long long int i, max=0, maxindex=-1;
    for(i=0;i<n;i++)
    {
        if(max<arrC[i]&&arrC[i]<=cap)
        {
            max=arrC[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(int argc, char **argv)
{
    long long int numTc, n, m, arrM[MAX], arrW[MAX], arrC[MAX], i, j, k, l, max, iteration=-1, eatIndex, tempArrM[MAX], tempArrMC, totItems;
	scanf("%lld",&numTc);
    while(numTc)
    {
        scanf("%lld %lld",&n,&m);
        totItems=0;
        iteration=0;
        max=0;
        for(i=0;i<m;i++)
        {
            scanf("%lld",&arrM[i]);
            if(max<arrM[i])
                max=arrM[i];
        }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arrW[i]);
            if(max<arrW[i])
                iteration=-1;
        }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arrC[i]);
            totItems+=arrC[i];
        }
        if(iteration!=-1)
        {
            while(totItems)
            {
                tempArrMC=0;
                for(i=0;i<m;i++)
                {
                    eatIndex=findMax(arrW,arrC,n,arrM[i]);
                    if(eatIndex!=-1)
                    {
                        arrC[eatIndex]--;
                        totItems--;
                    }
                    /*else
                        tempArrM[tempArrMC++]=arrM[i];*/
                }
                /*for(i=0;i<tempArrMC;i++)
                {
                    eatIndex=findMaxLeftOut(arrW,arrC,n,tempArrM[i]);
                    if(eatIndex!=-1)
                    {
                        arrC[eatIndex]--;
                        totItems--;
                    }
                }*/
                iteration++;
            }
        }
        printf("%lld\n",iteration);
        numTc--;
    }
	return 0;
}
