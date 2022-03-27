#include "Student.h"
#include "Discipline.h"
#include "OrderedSet.h"
#include "string"
#include <iostream>
#include <vector>
using namespace std;

int main() {
  Student<string, int> student1("Joao", 45);
  MeuTipo< Student<string, int> > mC(student1);
  mC.print();

  return 0;
}
