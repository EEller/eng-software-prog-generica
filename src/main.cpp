#include "Student.h"
#include "Discipline.h"
#include "string"
#include <iostream>
using namespace std;

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