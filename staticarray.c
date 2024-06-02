#include<stdio.h>
int main()
{
    int a[3] = {1,2,4};
    int item;
    printf("Enter item to search in the array:-\n");
    scanf("%d", &item);
    for (int i = 0; i < 3; i++)
    {
        if (item == a[i])
        {
            printf("Item found is loaction %d\n",i);
        }
        printf("Item not found\n");
    }  
    return 0;
}