#include<stdio.h>
int *findMissingAndRepeatedValues(int **grid, int gridSize, int *gridColSize, int *returnSize)
{
    int sort[gridSize * gridSize];
    int *ans = (int *)malloc(2 * (sizeof(int)));
    int i = 0, j = 0; // printf("%d %d",gridSize,*gridColSize);
    while (i != gridSize * gridSize)
    {
        int row = 0;
        while (row != gridSize)
        {
            sort[i++] = grid[j][row++];
        }
        j++;
    }
    i = 0, j = 0;
    while (i != gridSize * gridSize)
    {
        j = i + 1;
        while (j != gridSize * gridSize)
        {
            if (i > j)
            {
                int k = sort[i];
                sort[i] = sort[j];
                sort[j] = k;
            }
        }
    }
    int t = 0, counter = 1, miss = 0;
    for (int i = 0; i < gridSize; i++)
    {
        if (sort[i] == sort[i + 1] && i != gridSize - 1)
        {
            t = i;
        }
        else
        {
            if (counter != sort[i])
            {
                miss = sort[i];
            }
            counter++;
        }
    }
    ans[0] = t;
    if (miss == 0)
        ans[1] = counter + 1;
    else
        ans[1] = miss;
    *returnSize = 2;
    //  ans[0]=2;ans[1]=4;
    return ans;
}
void main(){
    int grid[][]={{1,3},{2,2}},*returnSize;
    findMissingAndRepeatedValues(grid, 2,2, returnSize);
    
}