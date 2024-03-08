#include <stdio.h>
int main()
{
    int i, n, j, m, k, total, w[100], v[100], r[100], t, x, y, profit = 0;
    printf("Enter no.of elements are present");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element weight \n", i + 1);
        scanf("%d ", &w[i]);
        printf("Enter the profit of the element\n");
        scanf("%d", &v[i]);
    }
    printf("Enter the total weight that SACK can hold");
    scanf("%d", &total);
    for (i = 0; i < n; i++)
    {
        r[i] = (v[i] / w[i]);
    }
    for (i = 0; i < n; i++)
    {
        m = i;
        for (j = i + 1; j < n; j++)
        {
            if (r[i] > r[j])
            {
                m = j;
            }
        }
        t = r[i];
        x = w[i];
        y = v[i];
        r[i] = r[m];
        r[m] = t;
        w[i] = w[m];
        w[m] = x;
        v[i] = v[m];
        v[m] = y;
    }
    for (i = 0; i < n; i++)
    {
        if ((total = total - w[i]) > 0)
        {
            profit += v[i];
        }
        else if ((total = total - w[i]) < 0)
        {
            profit += (v[i] * (total / w[i]));
            break;
        }
    }
    printf("The profit of the sack is %d", profit);
}
