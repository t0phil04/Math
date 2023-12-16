#include <iostream>

#include "Mathematics.h"


using namespace std;

void list_options();

int main() {  // Use int main() instead of void main()
    int option = -1;
    cout << "Welcome to the World of Mathematics!\n";

    // list the mathematical function options and returns option picked
    list_options();
    cout << "Which option do you pick? (Enter a number): ";
    cin >> option;

    int answer = -1;
    if (option == 1) { 
        MyMath EU_division;
        cout << "Let's run the Euclidean algorithm!\n";
        answer = EU_division.EU_Algorithm(1300, 773);
        cout << "Result: " << answer << endl;
    }

    system("pause"); // Add this line to keep the console window open
    return 0;  // Return 0 at the end of main
}

void list_options() {
    cout << "The list of math options are:\n"
        << "\t1. Euclidean Algorithm\n"
        << "\t2. Greatest Common divisor (GCD)\n"
        << "\t3. Modular exponentiation\n"
        << "\t4. Trials Division\n";
}
