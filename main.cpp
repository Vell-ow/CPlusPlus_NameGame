#include <string>
#include <iostream>
using namespace std;

int main() {
  string name = "Andrew";
  cout << name << " " << name << " fo-f";
  name[0] = 'a';
  cout << name;
}