#include <stdio.h>
#include <stdlib.h>

struct u
{
    unsigned char bit1 : 1;
    unsigned char bit2 : 1;
    unsigned char bit3 : 1;
    unsigned char bit4 : 1;
    unsigned char bit5 : 1;
    unsigned char bit6 : 1;
    unsigned char bit7 : 1;
    unsigned char bit8 : 1;

    unsigned char bit9 : 1;
    unsigned char bit10 : 1;
    unsigned char bit11 : 1;
    unsigned char bit12 : 1;
    unsigned char bit13 : 1;
    unsigned char bit14 : 1;
    unsigned char bit15 : 1;
    unsigned char bit16 : 1;

    unsigned char bit17 : 1;
    unsigned char bit18 : 1;
    unsigned char bit19 : 1;
    unsigned char bit20 : 1;
    unsigned char bit21 : 1;
    unsigned char bit22 : 1;
    unsigned char bit23 : 1;
    unsigned char bit24 : 1;

    unsigned char bit25 : 1;
    unsigned char bit26 : 1;
    unsigned char bit27 : 1;
    unsigned char bit28 : 1;
    unsigned char bit29 : 1;
    unsigned char bit30 : 1;
    unsigned char bit31 : 1;
    unsigned char bit32 : 1;
};
union bit_set
{
    unsigned short slowo[2];
    unsigned char bajty[4];
    unsigned int liczba;
    struct u bity;
};

int main()
{
    union bit_set unia;
    union bit_set *wsk = &unia;

    printf("Podaj liczbe: ");

    if(scanf("%u", &wsk->liczba)==0)
    {
        printf("Incorrect input");
        return 1;
    }

    printf("%u", (wsk->liczba));

    printf("\n");

    for (int i=0; i<2; i++)
    {
        printf("%d ", *(wsk->slowo+i));
    }

    printf("\n");

    for (int i=0; i<4; i++)
    {
        printf("%d ", *(wsk->bajty+i));
    }
    printf("\n");
    printf("%u", (wsk->bity.bit8));
    printf("%u", (wsk->bity.bit7));
    printf("%u", (wsk->bity.bit6));
    printf("%u", (wsk->bity.bit5));
    printf("%u", (wsk->bity.bit4));
    printf("%u", (wsk->bity.bit3));
    printf("%u", (wsk->bity.bit2));
    printf("%u ", (wsk->bity.bit1));

    printf("%u", (wsk->bity.bit16));
    printf("%u", (wsk->bity.bit15));
    printf("%u", (wsk->bity.bit14));
    printf("%u", (wsk->bity.bit13));
    printf("%u", (wsk->bity.bit12));
    printf("%u", (wsk->bity.bit11));
    printf("%u", (wsk->bity.bit10));
    printf("%u ", (wsk->bity.bit9));

    printf("%u", (wsk->bity.bit24));
    printf("%u", (wsk->bity.bit23));
    printf("%u", (wsk->bity.bit22));
    printf("%u", (wsk->bity.bit21));
    printf("%u", (wsk->bity.bit20));
    printf("%u", (wsk->bity.bit19));
    printf("%u", (wsk->bity.bit18));
    printf("%u ", (wsk->bity.bit17));

    printf("%u", (wsk->bity.bit32));
    printf("%u", (wsk->bity.bit31));
    printf("%u", (wsk->bity.bit30));
    printf("%u", (wsk->bity.bit29));
    printf("%u", (wsk->bity.bit28));
    printf("%u", (wsk->bity.bit27));
    printf("%u", (wsk->bity.bit26));
    printf("%u ", (wsk->bity.bit25));

    return 0;
}
