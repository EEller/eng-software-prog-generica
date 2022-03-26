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

int main() {
  Student student;
  student.setName("Fulano");
  student.setRegistration("m1234");
  Discipline discipline;
  discipline.setName("AEDS");
  discipline.setCode("CCO_01");

  cout << "Student: " << student.getName() << " - " << student.getRegistration() << endl;
  cout << "Discipline: " << discipline.getName() << " - " << discipline.getCode() << endl;

  return 0;
}