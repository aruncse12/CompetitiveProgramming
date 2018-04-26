#include <stdio.h>

int numTc, n, c[100001], l[100001];
long long int tot;
void calcMin(int s, int e)
{
    long long int mc, mci, i;
    mc=c[s];
    mci=s;
    for(i=s+1;i<=e;i++)
    {
        if(mc>c[i])
        {
            mc=c[i];
            mci=i;
        }
    }
    for(i=mci;i<=e;i++)
    {
        tot+=mc*l[i];
    }
    if(s<mci)
        calcMin(s,mci-1);
}
int main(int argc, char **argv)
{
    int i;
    scanf("%d",&numTc);
    while(numTc--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&c[i]);
        for(i=0;i<n;i++)
            scanf("%d",&l[i]);
        tot=0;
        calcMin(0,n-1);     
        printf("%lld\n",tot);
    }
	return 0;
}