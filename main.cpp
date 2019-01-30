#include <iostream>

using namespace std;

int main(){
   int a[10], i, nr;
   cout << "cate nr doriti? " << endl;
   cin >> nr;

   for (i = 0; i < nr; i++) {
        cout << "a["<< i <<"]: ";
         cin >> a[i];
    }



      for (i = 0; i < nr; i++) {
        if (a[i] < 0)
          a[i] = - a[i];
      }


     for (i = 0; i < nr; i++) {
        cout << a[i] << ", ";
    }
    cout << endl;

   return 0;
}
