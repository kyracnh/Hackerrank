#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    
  int maxAnd = 0, maxOr = 0, maxXOR = 0; 
  
  for (int i = 1; i < n; i++)
  {
      for (int j = i + 1; j <= n; j++)
      {
          int and = i & j;
          int or = i | j;
          int xor = i ^ j;
          
          if ((and > maxAnd) && (and < k))
          {
              maxAnd = and;
          }
          
          if ((or > maxOr) && (or < k))
          {
              maxOr = or;
          }
          
          if ((xor > maxXOR) && (xor < k))
          {
              maxXOR = xor;
          }
      }
  }
  printf("%d\n%d\n%d", maxAnd, maxOr, maxXOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

