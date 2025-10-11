#include <stdio.h>
int main() 
{
  int size, i, even = 0, odd = 0;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  int arr[size]; 
  printf("Enter %d elements: ", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0)
    even++;
    else
    odd++;
  }
  printf("Even numbers count: %d\n", even);
  printf("Odd numbers count: %d\n", odd);
  return 0;
}