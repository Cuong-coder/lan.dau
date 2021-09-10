#include<stdio.h>
int main()
{
    int A[10]={8,4,3,1,15,7,9,2,11,6};
    int Max,Min;
    int rd;
    Max=A[0];
    Min=A[0];
    for(int i=1;i<=9;i++){
        if(A[i]<Min){
            Min=A[i];

    }
        if(A[i]>Max){
		
            Max=A[i];
        }
    }
    printf("gia tri = %d\n",Max-Min);
    return 0;
}
