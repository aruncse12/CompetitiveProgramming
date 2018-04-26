#include <stdio.h>
int arr[50][50], k[50]={4,3,1,6,2}, n=5, numTc;
int main(int argc, char **argv)
{
    int source[50]={4,3,1,6,2}; 
    int currentSubset = 33; 
    int tmp; 
    while(currentSubset) 
    { 
    printf("("); 
    tmp = currentSubset; 
    for(int i = 0; i<3; i++) 
    { 
    if (tmp & 1) 
    printf("%d ", source[i]); 
    tmp >>= 1; 
    } 
    printf(")\n"); 
    currentSubset--; 
    } 
	return 0;
    getchar();
}