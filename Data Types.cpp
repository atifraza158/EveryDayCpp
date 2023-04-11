#include<iostream> //here we include our library file called iostream
using namespace std; // This line just to get standard input/output


// Here our main function starts...
int main() {
    cout<< "Data Types"<<endl; //endl statement is used for a new Line


    // Here we declare our variables
    int number;
    double decimalValue;
    char character;
    string name;
    bool practice;

    // Here we Initialize our variables
    number = 12;
    decimalValue = 3.14;
    character = 'a'; // it can store only one character
    name = "Atif Raza"; // Strings can store more than one character
    practice = true;


    // Here we Print values of our variables
    cout << "Integar Number: "<<number<<endl;
    cout << "Floating Point Number: "<<decimalValue<<endl;
    cout << "Single Character: "<<character<<endl;
    cout << "String Name: "<<name<<endl;
    return 0;
}