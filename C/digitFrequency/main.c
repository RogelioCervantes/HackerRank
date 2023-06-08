#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int freq[10] = {0,0,0,0,0,0,0,0,0,0}; int numbers[10] = {0,1,2,3,4,5,6,7,8,9};
    int num;

    char *s  = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    for (int i = 0; i < strlen(s); i++)
    {
        num = s[i] - '0';
        for (int i = 0; i < 10; i++)
        {
            if (num == numbers[i]) freq[i]++;
        }
    }
    
    for (int i = 0; i < 10; i++) printf("%d ", freq[i]);
    

    return 0;
}