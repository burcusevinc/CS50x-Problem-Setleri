#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;

    do{
        dollars = get_float("Para üstü ne kadar? \n");
    }while(dollars<=0);

    int cents = round(dollars*100); //tam sayıya çevirme
    int quarter=25;
    int dime=10;
    int nickel=5;
    int penny=1;
    int sayac=0;

    while(cents>=quarter)
    {
        cents-=quarter;
        sayac++;
    }

    while(cents>=dime)
    {
        cents-=dime;
        sayac++;
    }
    
    while(cents>=nickel)
    {
        cents-=nickel;
        sayac++;
    }

    while(cents>=penny)
    {
        cents-=penny;
        sayac++;
    }
    
    printf("Kullanılan bozukluk sayısı: %i \n",sayac);
}
