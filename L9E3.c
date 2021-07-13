#include<stdio.h>
#define MAX_SIZE 5
void binary_search(int fn_arr[], int element) 
{
    int f = 0, r = MAX_SIZE, mid;
    while (f <= r)
    {
        mid = (f+r)/2;
        if (fn_arr[mid] == element)
        {
            printf("\nSearch Element %d Found at Position %d\n", element,MAX_SIZE- mid);
            break;
        }
        else if (fn_arr[mid] < element)
        f = mid + 1;
        else
        r = mid - 1;
    }
    if (f > r)
    printf("\nSearch Element %d NOT FOUND", element);
}
int main() 
{
    int arr_search[MAX_SIZE], i, element;
    printf("Simple Binary Search using Arrays\n");
    printf("\nEnter %d Elements: \n", MAX_SIZE) ;
    for (i =  MAX_SIZE-1; i>=0; i--)
    scanf("%d", &arr_search[i]);
    printf("\nEnter Element to Search: ");
    scanf("%d", &element);
    binary_search(arr_search, element);
}