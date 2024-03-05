#include <stdio.h>
int main(void) // 素数
{
    long long int n;
    int count = 1;
    scanf("%d", &n);
    int gays[n];
    gays[0] = 2;
    for (int i = 2; i <= n; i++)
    {
        int c = 1;
        for (int j = 0; j <= count - 1; j++)
        {
            if (i % gays[j] == 0)
            c = 0; // 循环内设置一个按钮
        }
        if (c == 1)
        {
            count++;
            gays[count - 1] = i;
        }
    }
    for (int i = 0; i <= count - 1; i++)
        printf("%5d,", gays[i]);
    printf("\n一共%d个", count);

    return 0;
}