#include <stdio.h>
 
    int main() {
 
    int N, hr, min, sec;

    scanf("%d", &N);

    hr = N/3600;
    hr = hr%3600;
    min = N/60;
    min = min%60;
    sec = N/60;
    sec = sec%60;

    printf("%d:%d:%d\n", hr, min, sec);

return 0;
}



