#include "string"
#include <iostream>
using namespace std;

class Student {
private:
  string name;
  string registration;

public:
  string getName() {
    return name;
  }

  void setName(string n) {
    name = n;
  }

  string getRegistration() {
    return registration;
  }

  void setRegistration(string r) {
    registration = r;
  }
};