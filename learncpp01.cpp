#include <iostream>    // Needed to perform IO operations
using namespace std;


int main()
{

float in_cm;
char in_inch[4];

cout << "Convert Inch to cm: " << endl;
cin >> in_inch;

in_cm = atoi(in_inch)*2.54;

cout << "%.2f cm \n" << endl;

return 0;
}

