#include "string"
#include <iostream>
using namespace std;

template <class T, class U>
class Discipline {
private:
  T name;
  U code;

public:
  Discipline(T no, U co) {
    name = no;
    code = co;
  }
  T getName() {
    return name;
  }

  void setName(T n) {
    name = n;
  }

  T getCode() {
    return code;
  }

  void setCode(T c) {
    code = c;
  }

  void print() {
  cout << getName() << " - " << getCode() << endl;
  }
};
