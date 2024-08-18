#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,x,k,p,d,m,o,h,r,l,sum;
    scanf("%d", &n);
    
    while (n!=0) {
    
    x = n%10; // 4
    k = n/10;
    p = k%10; // 6
    d = k/10;
    m = d%10; // 5
    o = d/10;
    h = o%10; // 0
    r = o/10;
    l = r%10; // 1
    
    sum = x+p+m+h+l;
    
    
    
    printf("%d", sum);
    break;
    }
    return 0;
}
