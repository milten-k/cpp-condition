#include <iostream>

using namespace std;

int main()
{
    int v = 9;
    int v2 = 5;

    if (v >= 5) {  // greater than condition
        cout << "Condition 1: true" << endl;
    }
    else {
        cout << "Condition 1: false" << endl;
    }

    if (v == 9 && v2 == 5) {  //  AND condition
        cout << "Condition 2: true" << endl;
    }
    else {
        cout << "Condition 2: false" << endl;
    }

    if (v == 9 || v2 == 4) {  //  OR condition - 1 condition needs to be true
        cout << "Condition 3: true" << endl;
    }
    else {
        cout << "Condition 3: false" << endl;
    }

    if ( (v != 1 && v2 ==5) || v2 == 5) {  //  AND + OR condition
        cout << "Condition 4: true" << endl;
    }
    else {
        cout << "Condition 4: false" << endl;
    }

    bool condition1 = (v2 != 7) && (v == 9);
    cout << condition1 << endl;

    bool condition2 = v2 < 10;
    cout << condition2 << endl;


    return 0;
}


