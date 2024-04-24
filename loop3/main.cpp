

 
#include <iostream>
using namespace std;

void calculator(int x, int y, int choice) {
    int z;
    if (choice == 1) {
        z = x + y;
        cout << "Result is: " << z << endl;
    } else if (choice == 2) {
        z = x - y;
        cout << "result: " << z << endl;
    } else if (choice == 3) {
        z = x * y;
        cout << "Result: " << z << endl;
    } else if (choice == 4) {
        if (y != 0) {
            z = x / y;
            cout << "Result: " << z << endl;
        } else {
            cout << "The second integer is zero , divide by zero" << endl;
        }
    } else if (choice == 5) {
        z = x % y;
        cout << "Result: " << z << endl;
    } else {
        cout << "not correct choice , please choose the above choices!" << endl;
    }
}


int main() {
    cout << " you are Welcome" << endl;
    int x, y, choice;
    char cont;

    do {
		
		
		
		
		cout << "Main menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
		
		
		
		cout << "enter your choice (1-5) : ";
        cin >> choice;
		
        cout << "Enter integer number1: ";
        cin >> x; 
		        cout << "Enter integer number2: ";
cin >> y;

        
        calculator(x, y, choice);

        cout << "press y or Y to continue:n ";
        cin >> cont;
    } while (cont == 'Y' || cont == 'y');

    return 0;



   
}
