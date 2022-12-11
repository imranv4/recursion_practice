#include<stdio.h>
int power(int n, int i,int m)
{
    if(i>m)return 1;
    return n*power(n,i+1,m);
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ans =power(n,1,m);
    printf("%d",ans);
    return 0;
}
