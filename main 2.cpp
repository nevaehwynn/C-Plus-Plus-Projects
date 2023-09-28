#include <iostream>
using namespace std;

int main() {
   int redValue;
   int greenValue;
   int blueValue;
   
   cin >> redValue;
   cin >> greenValue;
   cin >> blueValue;
   
   if (redValue <= greenValue && redValue <= blueValue) {
      cout << redValue - redValue << " " << greenValue - redValue << " " << blueValue - redValue << endl;
   }
   else if (greenValue <= redValue && greenValue <= blueValue) {
      cout << redValue - greenValue << " " << greenValue - greenValue << " " << blueValue - greenValue << endl;
   }
   else if (blueValue <= greenValue && blueValue <= redValue) {
      cout << redValue - blueValue << " " << greenValue - blueValue << " " << blueValue - blueValue << endl;
   }
   return 0;
}
