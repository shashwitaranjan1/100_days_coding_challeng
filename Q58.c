#include <stdio.h>
int main() 
{
  int size, i;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter %d elements: ", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
  }
  int max = arr[0];
  int min = arr[0];
  for (i = 1; i < size; i++) 
  {
    if (arr[i] > max)
    max = arr[i];
    if (arr[i] < min)
    min = arr[i];
  }
  printf("Maximum element: %d\n", max);
  printf("Minimum element: %d\n", min);
  return 0;
}