#include <stdio.h>
int main() 
{
  int n, i;
  float sum = 0.0, num, den;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) 
  {
    num = 2 * i - 1;  
    den = 2 * i;  
    sum += num / den;
  }
  printf("Sum of the series: %.2f\n", sum);
  return 0;
}