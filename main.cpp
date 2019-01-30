#include <iostream>

using namespace std;

int main(){
   int a[20], i;
   for (i = 0; i < 20; i++) {
      a[i] = 19 - i;
   }
   for (i = 0; i < 20; i++) {
      cout << a[i] << " ";
   }
   cout << endl;
   return 0;
}
