#include <iostream>

using namespace std;
int main() 
{
    double x,y;
    cout << "Write a point cords (x y) ";
    cin >> x >> y;
    if ((y>0) || (y<0.7)) cout << "Point on a region" << endl;
    else if ((y=0.8) || (y=0))
        cout << "Point on a border" << endl;
    else cout << "Point NOT on a region" << endl;

    // switch(x,y)
    // {
    //     case 1:
    //         cout << "(x>2)" << cout << "Point on a region" << sendl;
    //         break;
    //     case 2:
    //         cout << "" <<endl;
    //         break;
    //     case 3:
    //         cout << "" <<endl;
    //         break;
        
    // }
}