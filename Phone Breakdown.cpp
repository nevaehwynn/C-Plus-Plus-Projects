#include <iostream>
using namespace std;

int main() {
   long long phoneNumber;

   cin >> phoneNumber;
   
   cout << "(" << phoneNumber / 10000000 << ")";
   cout << " " << (phoneNumber / 10000) % 1000;
   cout << "-" << phoneNumber % 10000 << endl;
   
   
   return 0;
}
