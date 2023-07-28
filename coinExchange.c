#include <stdio.h>
int findMinCoins(int res[], int coins[], int n, int amount)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        while (amount >= coins[i])
        {
            amount -= coins[i];
            res[count] = coins[i];
            count++;
        }
        if (amount == 0)
            break;
    }
    return count;
}

int main()
{
    int res[10], amount;
    int coins[6] = {100,50,25, 20, 10, 5};
    printf("Enter Amount : ");
    scanf("%d", &amount);
    int cres = findMinCoins(res, coins, 6, amount);
    printf("Coins => ");
    for (int i = 0; i < cres; i++)
        printf(" %d ", res[i]);
    printf("\ncount => %d", cres);
}