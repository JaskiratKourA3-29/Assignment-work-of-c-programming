#include <stdio.h>
int main()
{
    int f = 0, s = 1, i, n;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("\n%d", f);
        int next = f + s;
        f = s;
        s = next;
    }
    return 0;
}