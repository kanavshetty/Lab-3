#include "llh.h"
using namespace std;

int main() {
    int choice = 0;
    int littles = 0;
    int lots = 0;
    int heaps = 0;
    bool endProgram = false;


    cout << "Enter the values for the first object:" << endl;
    cout << "Littles: ";
    cin >> littles;
    cout << endl << "Lots: ";
    cin >> lots;
    cout << endl << "Heaps: ";
    cin >> heaps;

    llh player1(littles, lots, heaps);

    cout << "Enter the values for the second object:" << endl;
    cout << "Littles: ";
    cin >> littles;
    cout << endl << "Lots: ";
    cin >> lots;
    cout << endl << "Heaps: ";
    cin >> heaps;

    llh player2(littles,lots,heaps);

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
            // player1 + player2
        case 2:
            // player1 - player2
        case 3:
            // player1 * player2
        case 4:
            // player1 / player2
        case 5:
            // player1 == player2
        case 6:
            // end program
    }

}