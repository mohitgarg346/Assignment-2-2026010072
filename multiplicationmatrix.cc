#include <stdio.h>

int main()
{
    int a[20][3], b[20][3], c[50][3];
    int i, j, k, m, n, p, q, count = 0;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &m, &n);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &p, &q);

    if (n != p)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    printf("Enter first matrix in triplet form:\n");
    printf("Enter number of non-zero elements: ");
    scanf("%d", &a[0][2]);

    a[0][0] = m;
    a[0][1] = n;

    for (i = 1; i <= a[0][2]; i++)
        scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);

    printf("Enter second matrix in triplet form:\n");
    printf("Enter number of non-zero elements: ");
    scanf("%d", &b[0][2]);

    b[0][0] = p;
    b[0][1] = q;

    for (i = 1; i <= b[0][2]; i++)
        scanf("%d%d%d", &b[i][0], &b[i][1], &b[i][2]);

    c[0][0] = m;
    c[0][1] = q;

    for (i = 1; i <= a[0][2]; i++)
    {
        for (j = 1; j <= b[0][2]; j++)
        {
            if (a[i][1] == b[j][0])
            {
                int row = a[i][0];
                int col = b[j][1];
                int value = a[i][2] * b[j][2];

                int found = 0;

                for (k = 1; k <= count; k++)
                {
                    if (c[k][0] == row && c[k][1] == col)
                    {
                        c[k][2] += value;
                        found = 1;
                        break;
                    }
                }

                if (!found)
                {
                    count++;
                    c[count][0] = row;
                    c[count][1] = col;
                    c[count][2] = value;
                }
            }
        }
    }

    c[0][2] = count;

    printf("\nResultant Matrix in Triplet Form:\n");

    for (i = 0; i <= c[0][2]; i++)
        printf("%d %d %d\n", c[i][0], c[i][1], c[i][2]);

    return 0;
}
