//https://leetcode.com/problems/two-sum/



#include <stdio.h>
int main()
{
    //Declare variables
    int a[] = {2, 7, 11, 15};
    //target = 9
    int target = 9;
    //Finding the size of the array
    int size = sizeof(a)/sizeof(a[0]);
    int i, j;
    //Loop through the array
    for(i = 0; i < size; i++)
    {
        // Loop through the array again
        for(j = i+1; j < size; j++)
        {
            //Check if the sum of the two numbers is equal to the target
            if(a[i] + a[j] == target)
            {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    return 0;
}