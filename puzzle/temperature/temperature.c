#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

#define MAX_TEMP 6000
#define MIN_TEMP -300

int main()
{
    int result = 0;
    int min = MAX_TEMP;
    int min_negative = MIN_TEMP;
    
    int n; // the number of temperatures to analyse
    scanf("%d", &n);
    
    if (n == 0) {
        result = 0;
    } else if (n == 1) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        scanf("%d", &t);
        result = t;
    } else {
        for (int i = 0; i < n; i++) {
            int t; // a temperature expressed as an integer ranging from -273 to 5526
            scanf("%d", &t);
            
            if (t > 0 && min > t) {
                min = t;
            }
            
            if (t < 0 && min_negative < t) {
                min_negative = t;
            }
        }
        
        fprintf(stderr, "min: %d\n", min);
        fprintf(stderr, "min_negative: %d\n", min_negative);
        
        if (min <= (min_negative * -1)) {
            result = min;
        } else {
            result = min_negative;
        }
    }
 

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%d\n", result);

    return 0;
}
