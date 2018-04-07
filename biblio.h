#include<math.h>

int volume_cuboid(int a, int b, int h)
{
    return a*b*h;
}
double element(double a)
{
    return pow(a,0.5);
}

int squaring(int a)
{
    return pow(a,2);
}

int prime_number(int a)
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

int perfect_number(int a)
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

int deltoid_field(int a, int b) 
{
    return (a*b)/2; 
}

