#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    
    char s[50];
    scanf("%s", s);
    printf("%s\n", s);
    
    char sen[50];
    scanf(" %[^\n]%*s", sen);
    printf("%s\n", sen);
    
       
    return 0;
}
