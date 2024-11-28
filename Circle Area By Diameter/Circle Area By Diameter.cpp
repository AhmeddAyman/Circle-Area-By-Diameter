#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_3_Solution_19
// Circle Area By Diameter.

float ReadDiameter()
{
    float D;
    cout << "Please Enter Radious D " << endl;
    cin >> D;
    return D;
}

float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589;
    float Area = (pow(D,2) * PI);
    return Area;
}

void PrintResult(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    PrintResult(CircleAreaByDiameter(ReadDiameter()));

    return 0;
}
