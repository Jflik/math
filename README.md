"# math" 
1. volume of cuboid. This function counts the volume of a cuboid, a-is lengh of one side, b-is lengh of seconf side, h-is hight of a cuboid.  
        int volume_cuboid(int a, int b, int h)
           {

                return a*b*h;
           }
           
  example:
           cin >> 1 >> 2 >> 3;
           
            program schows
                 6
           
2. element. This function gives element of a number. a-is a number which element you want.

            double element(double a)
        {
             return pow(a,0.5);
        }
        
example:
    cin >>100;
    
    program schows
     10
     
3.squaring. This function gives your number squard. a-is number you are squaring.

        int squaring(int a)
        {
           return pow(a,2);
        }
        
example:
cin >> 4

    program schows
16

4.Prime number. This function tells you if number you have enterd is Prime number. a-is number you are cheking.
If program schows 1-it means the number is Prime number, if 0-it means it is not a Prime number.

                int Prime number(int a)
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

example:
cin >> 11

program schows
1

5.Perfect number. This function tells you if number you have enterd is perfect number. a-is number you are cheking.
If program schows 1-it means the number is perfect number, if 0-it means it is not a perfect number.

        int perfect number(int a)
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

example 
cin >> 6

program schows
1


6.Deltoid field. This function gives you field of deltoid. a-is one diagonal of Deltoid, b is second diagonal of Deltoid.


        int deltoid field(int  a, int b)
        {
           return (a*b)/2;
        }

example
cin >> 3 >> 4

program schows
6




