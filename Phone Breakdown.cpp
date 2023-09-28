#include <iostream>
using namespace std;

int main() {
   long long phoneNumber;

   cin >> phoneNumber;
   
   cout << "(" << phoneNumber / 10000000 << ")"; // Expression to get Area code
   cout << " " << (phoneNumber / 10000) % 1000; // Expression to get Prefix
   cout << "-" << phoneNumber % 10000 << endl; // Expression to get Line number
   
   return 0;
}
