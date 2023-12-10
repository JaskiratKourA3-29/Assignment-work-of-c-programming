#include <stdio.h>
int main()
{
    int n;
    printf("enter the limit\n");
    scanf("%d", &n);
    int a[n], i;
    printf("enter the array elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int big, sbig;
    big = a[0];
    sbig = a[1];
    for (i = 1; i < n; i++)
    {
        if (big < a[i])
        {
            sbig = big;
            big = a[i];
        }
        else if (sbig < a[i])
            sbig = a[i];
    }
    printf("second largest element is %d", sbig);
    return 0;
}