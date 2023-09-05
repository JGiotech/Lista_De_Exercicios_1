#include <stdio.h>
 
    int main() {
 
    int N, hr, min, sec;

    scanf("%d", &N);

    min= N/60; 
    sec= N%60;
    hr= min/60;
    min= min%60;

    printf("%d:%d:%d\n", hr, min, sec);

return 0;
}
