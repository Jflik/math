#include <iostream>
#include "../../biblio.h"
using namespace std;

int main()
{
int a,b,h;

cin >> a >> b >> h;

cout << volume_cuboid(a,b,h)<< endl;

cout << element(a) << endl;

cout << squaring(a) << endl;

cout << prime_number(a) << endl;

cout << perfect_number(a) << endl;
    
cout << deltoid_field(a,b) << endl;

    return 0;
}
