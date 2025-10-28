#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr;
    aptr = &a; // aptr now holds the address of 'a'
 cout << *aptr << endl;
  *aptr = 28;

 cout << &a << endl;
 cout << a << endl; // Assuming the image intended to show the new value of 'a' after line 11

    int arr[] = {10, 20, 30};
 cout << arr << endl;

    return 0;
}
