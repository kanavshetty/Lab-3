#include "llh.h"
using namespace std;

int main() {
    int choice = 0;

    cout << "Enter the values for the first object:" << endl;
    cout << "Littles: ";
    //cin << obj;
    cout << endl << "Lots: ";
    //cin << obj;
    cout << endl << "Heaps: ";
    //cin << obj;

    cout << "Enter the values for the second object:" << endl;
    cout << "Littles: ";
    //cin << obj;
    cout << endl << "Lots: ";
    //cin << obj;
    cout << endl << "Heaps: ";
    //cin << obj;

    while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6) {
        cout << "Select an operation to be performed: " << endl;
        cout << "1. + operation" << endl;
        cout << "2. - operation" << endl;
        cout << "3. * operation" << endl;
        cout << "4. / operation" << endl;
        cout << "5. == operation" << endl;
        cout << "6. EXIT PROGRAM" << endl;
        cin >> choice;
        cout << endl;
    }

    switch(choice){
        case 1:
            // +
        case 2:
            // -
        case 3:
            // *
        case 4:
            // /
        case 5:
            // ==
        case 6:
            // end program
    }

    
}