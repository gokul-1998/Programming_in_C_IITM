# include <stdio.h>
int main()
{
    int a=1,b=1,c=1;
    int x;
    a+=b+=c;
    printf("a=%d,b=%d,c=%d,x=%d\n",a,b,c,x);

    x=-a*b/-c*b;
    printf("a=%d,b=%d,c=%d,x=%d\n",a,b,c,x);
    return 0;
}

// gcc pa3.6.c -o pa3.6 -std=c17