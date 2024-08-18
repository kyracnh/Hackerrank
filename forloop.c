#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	char nombs[10][10] = {"one","two","three","four","five","six","seven","eight","nine"};
      
    for (int i = a; i <= b; i++){
        
        if (i<= 9){
            printf("%s\n", nombs[i-1]);
        }else if (i > 9) {
        if (i%2 == 0) {
        printf("even\n");
        }else {
        printf("odd\n");
        }
        }
        continue;
    }
    
    

    return 0;
}
