#include <stdio.h>
int main() 
{
  int size, i, sum = 0;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  int arr[size];  
  printf("Enter %d elements:", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  printf("Sum of array elements = %d\n", sum);
  return 0;
}