#include <stdio.h>

// HH : MM : SS

int main()
{
    int totalSeconds;

    int hours, minutes, remainingSeconds;

    printf("Enter seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds - hours * 3600) / 60;
    remainingSeconds = (totalSeconds - hours * 3600) % 60;

    if (hours < 10)
        printf("0");
    printf("%d : ", hours);
    if (minutes < 10)
        printf("0");
    printf("%d : ", minutes);
    if (remainingSeconds < 10)
        printf("0");
    printf("%d\n", remainingSeconds);

    return 0;
}
