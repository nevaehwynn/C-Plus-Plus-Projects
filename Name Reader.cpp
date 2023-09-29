#include <iostream>
#include <string>             
using namespace std;

int main() {
   string userName;
   
   cout << "Please input your name: " << endl; // Ask for name
   cin >> userName; //Input name
   
   cout << "Hello " << userName << "!" << endl; //Greet person using the name from userName


   return 0;
}

