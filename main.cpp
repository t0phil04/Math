#include <iostream>
#include <vector>
#include "Mathematics.h"


using namespace std;

// Extra functions below main()
void list_options();
template<typename T> vector<T> getValues_2();
template<typename T> vector<T> getValues_3();

int main() { 
    MyMathOperations MathInstance; // instance to be used for all operations
    
    cout << "Welcome to the World of Mathematics!\n";

    // 18 - 22 // list the mathematical function options and returns option picked
    list_options();
    int option = -1;
    cout << "Which option do you pick? (Enter a number): ";
    cin >> option;

    int result = -1; // dummy value for end value of operations
    if (option == 1) { // else blocks to be used for all other math operations
        
        cout << "Let's run the Euclidean algorithm!\n";
        
        // Use getValues_2 to get two values from the user
        // those values are then passed to the parameters for the operation
        vector<int> tmp = getValues_2<int>();
        result = MathInstance.EU_Algorithm(tmp.at(0), tmp.at(1));
        cout << "Result: " << result << endl;
    }
    else if (option == 2)
    {

    }
    else if (option == 3)
    {

    }
    else
    {
        vector<int> Primality;
        int n = -1;
        cout << "Let's do Trails Division!\n" << "Please enter a vale: ";
        cin >> n;
        Primality = MathInstance.Trials_Division(n);
        if (Primality.size() > 1)
        {
            cout << "Your Prime Factors: ";
            for (int i = 0; i < Primality.size(); i++)
            {
                cout << Primality.at(i) << " ";
            }
        }
    }

    return 0;
}

void list_options() {
    cout << "The list of math options are:\n"
        << "\t1. Euclidean Algorithm\n"
        << "\t2. Greatest Common divisor (GCD)\n"
        << "\t3. Modular exponentiation\n"
        << "\t4. Trials Division\n";
}

// For math operations that require 2 values
template <typename T>
vector<T> getValues_2() {
    vector<T> myVec;
    cout << "Please enter 2 numbers: ";
    T value;
    for (int i = 0; i < 2; ++i) {
        cin >> value;
        myVec.push_back(value);
    }
    return myVec;
}

// For math operations that require 3 values
template <typename T>
vector<T> getValues_3() {
    vector<T> myVec;
    cout << "Please enter 3 numbers: ";
    T value;
    for (int i = 0; i < 3; ++i) {
        cin >> value;
        myVec.push_back(value);
    }
    return myVec;
}

