// Create a digital clock and set time and run it in 00:00:00: format.
#include <stdio.h>
#include <Windows.h> //Windows-specific header file for the C
int main()
{
    int Hour, Minute, Second;
    int D = 1000; // we add a 1000 milliseconds delay and will use in function sleep.
    printf("\t\t\t\t\b\b\b\b\b\b-:WELCOME TO DIGITAL CLOCK:-\n\n");
    printf("[Hint : Set Hour Click Enter\tSet Minute Click Enter\t  Set Second Click Enter]\n");
    printf("SET HOURS   : ");
    scanf("%d", &Hour);
    printf("SET MINUTES : ");
    scanf("%d", &Minute);
    printf("SET SECONDS : ");
    scanf("%d", &Second);
    if (Hour > 12 || Minute > 59 || Second > 59)
    {
        printf("ERROR! \n");
        exit(0);
    }
    while (1) // this is an infinite loop and anything inside will repeat itself to infinity.
    {
        Second++;
        if (Second > 59)
        {
            Minute++;
            Second = 0;
        }
        if (Minute > 59)
        {
            Hour++;
            Minute = 0;
        }
        if (Hour > 12)
        {
            Hour = 1;
        }
        printf("\nTIME : ");
        printf("%02d:%02d:%02d", Hour, Minute, Second); // this will write our time in this format 00:00:00
        Sleep(D); // the function sleep will slow down the while loop and make it more real.
        system("cls"); // it will clear the screen.
    }
    return 0;
}