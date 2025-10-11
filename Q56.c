#include <stdio.h>

int main() 
{
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter elements: ");
  for (int i = 0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }
  printf("Elements: ");
  for (int i = 0; i < n; i++) 
  {
    printf("%d ", arr[i]);
  }
  return 0;
}