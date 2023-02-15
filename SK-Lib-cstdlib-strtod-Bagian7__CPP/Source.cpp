#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char* end;

    cout << "99.99" << " to double = " << strtod(" 19.99", &end) << endl;
    cout << "end string = " << end << endl << endl;
    
    cout << "xyz1.80" << " to double = " << strtod("xyz1.80", &end) << endl;
    cout << "end string = " << end << endl << endl;

    _getch();
    return 0;
}