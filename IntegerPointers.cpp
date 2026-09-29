#include <iostream>
using namespace std;

int main()
{
    // Variables to store user input
    int firstValue;
    int secondValue;
    int thirdValue;

    // Get three integer values from the user
    cout << "Enter the first integer: ";
    cin >> firstValue;

    cout << "Enter the second integer: ";
    cin >> secondValue;

    cout << "Enter the third integer: ";
    cin >> thirdValue;

    // Dynamically allocate memory for each integer
    int* firstPtr = new int(firstValue);
    int* secondPtr = new int(secondValue);
    int* thirdPtr = new int(thirdValue);

    // Display the original variable values
    cout << "\nValues stored in variables:" << endl;
    cout << "First value: " << firstValue << endl;
    cout << "Second value: " << secondValue << endl;
    cout << "Third value: " << thirdValue << endl;

    // Display the values accessed through the pointers
    cout << "\nValues accessed through pointers:" << endl;
    cout << "First pointer value: " << *firstPtr << endl;
    cout << "Second pointer value: " << *secondPtr << endl;
    cout << "Third pointer value: " << *thirdPtr << endl;

    // Display the memory addresses stored by the pointers
    cout << "\nMemory addresses stored by pointers:" << endl;
    cout << "First pointer address: " << firstPtr << endl;
    cout << "Second pointer address: " << secondPtr << endl;
    cout << "Third pointer address: " << thirdPtr << endl;

    // Release dynamically allocated memory
    delete firstPtr;
    delete secondPtr;
    delete thirdPtr;

    // Set pointers to nullptr after deleting memory
    firstPtr = nullptr;
    secondPtr = nullptr;
    thirdPtr = nullptr;

    return 0;
}
