#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int n;
char rasp[9999999];

int palindrom(int x)
{
    int y=0, c;
    while (x)
    {
        c=x%10;
        x/=10;
        y=y*10+c;
    }
    return y;
}
char* convert(int x)
{
    int t=0, y;
    char val[4];
    val[0]=0;
    val[1]=0;
    val[2]=0;
    val[3]=0;
    y=palindrom(x);
    while (y)
    {
        val[t++]=(char)(48+y%10);
        y/=10;
    }
    return val;
}

int main()
{
    freopen("secvsir.in","r",stdin);
    freopen("secvsir.out","w",stdout);
    scanf("%d",&n);
    char* aux;
    for (int i=1; i<=n; i++)
    {
        aux=convert(i);
        if (strstr(rasp,aux)==0)
            strcat(rasp,aux);
    }
    printf("%s",rasp);
    return 0;
}
