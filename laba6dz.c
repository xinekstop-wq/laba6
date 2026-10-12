#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, cifra, desyatki, sotki;

    printf("Введите четырехзначное число: ");
    scanf_s("%d", &n);

    cifra = n % 10;
    desyatki = n / 10 % 10;
    sotki = n / 100 % 10;

    if (cifra % 2 == 0)
        printf("число единиц – четное\n");

    if (desyatki % 2 == 0)
        printf("число десятков – четное\n");

    if (sotki % 2 == 0)
        printf("число сотен – четное\n");

    system("pause");
    return 0;
}