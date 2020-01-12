#include <stdio.h>








int main()
{
    int a, b;
    char str[123];

    int ret = scanf("%d %d %s", &a, &b, str);
    printf("\n%d\n", ret);
}