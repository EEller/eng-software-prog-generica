#include "string"
#include <iostream>
using namespace std;

template <class T, class U>
class Student {
  T name;
  U registration;

public:
  Student(T no, U id) {
    name = no;
    registration = id;
  }
  T getName() {
    return name;
  }

  void setName(T n) {
    name = n;
  }

  U getRegistration() {
    return registration;
  }

  void setRegistration(U r) {
    registration = r;
  }

  void print() {
    cout << getName() << " - " << getRegistration() << endl;
  }
};