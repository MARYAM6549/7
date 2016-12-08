//pseudocode
/*
a == @
b == #
a + b == @ + #
b = @ + #
a = b - a
a == #
b -= a
b == @
*/
#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
int integer1,integer2;
cout<<"enter 2 integers";
cout<<"\ninteger1 = ";
cin>>integer1;
cout<<"integer2 = ";
cin>>integer2;
integer2 = integer1 + integer2;
integer1 = integer2 - integer1;
integer2 -= integer1;
cout<<"\ninteger1 = "<<integer1<<"integer2 = "<<integer2<<"\n";
  return 0;
}
