#include<stdio.h>
int main()
{
    int i;
    float f;
    char c;
    
    scanf("%d %f %c", &i, &f, &c);
    printf("%d %.2f %c", i, f, c);
    return 0;
}