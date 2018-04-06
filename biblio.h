#include<math.h>

int dodawanie(int a, int b)
{
    return a+b;
}

double pierwiastek(double a)
{
    return pow(a,0.5);
}

int potegowanie(int a)
{
    return pow(a,2);
}

int liczba_pierwsza(int a)
{
    int licznik=0;
    for(int i=1; i<=a ;i++)
    {
        if(a%i==0)
        {
            licznik++;
        }
    }
    if(licznik==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int liczba_doskonala(int a)
{
     int licznik=0;
    for(int i=1; i<a ;i++)
    {
        if(a%i==0)
        {
            licznik=licznik+i;
        }
    }
    if(licznik==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
