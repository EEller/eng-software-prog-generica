#include "string"
#include <iostream>
using namespace std;

class Discipline {
private:
  string name;
  string code;

public:
    string getName() {
    return name;
  }

  void setName(string n) {
    name = n;
  }

  string getCode() {
    return code;
  }

  void setCode(string c) {
    code = c;
  }
};