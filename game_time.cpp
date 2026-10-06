/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int level_one_minutes = 78;
    int level_two_minutes = 144;

    int level_one_hours = level_one_minutes / 60;
    int level_one_remaining_minutes = level_one_minutes % 60;

    int level_two_hours = level_two_minutes / 60;
    int level_two_remaining_minutes = level_two_minutes % 60;

    int difference_minutes = level_two_minutes - level_one_minutes;
    int difference_hours = difference_minutes / 60;
    int difference_remaining_minutes = difference_minutes % 60;

    cout << "Level 1: " << level_one_hours << " hours, "
         << level_one_remaining_minutes << " minutes" << endl;

    cout << "Level 2: " << level_two_hours << " hours, "
         << level_two_remaining_minutes << " minutes" << endl;

    cout << "Level 2 took " << difference_hours << " hours, "
         << difference_remaining_minutes << " minutes longer" << endl;

    return 0;
}
