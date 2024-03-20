#include <stdio.h>

void printTwoDigitMultiplesOfSeven()
{
    int start = 14; // Số đầu tiên có 2 chữ số và là bội của 7
   
    while (start < 100)
    {
        printf("%d ", start);
        start += 7; // Tăng start lên 7 để tìm các bội tiếp theo
    }
}

int main()
{
    printf("Các số có 2 chữ số và là bội của 7: ");
    printTwoDigitMultiplesOfSeven();
   
    return 0;
}
