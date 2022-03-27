#include "Student.h"
#include "Discipline.h"
#include "OrderedSet.h"
#include "UnOrderedSet.h"
#include "string"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//template <class T>
int main() {
  cout << "UnOrdered Students" << endl;
  Student<string, string> student1("Joao", "M202201");
  Student<string, string> student2("Maria", "M202202");
  Student<string, string> student3("FELIPE", "M202203");
  UnOrderedSet < Student<string, string> > VS(student1);
  VS.insert(student2);
  VS.insert(student3);
  VS.print();
  int count = VS.count();
  cout << "cout = " << count << endl;

  cout << "UnOrdered Discipline" << endl;
  Discipline<string, string> discipline1("AEDS1", "CCO01");
  Discipline<string, string> discipline2("Logica", "CCO02");
  Discipline<string, string> discipline3("MD", "CCO03");
  UnOrderedSet < Discipline<string, string> > VD(discipline1);
  VD.insert(discipline2);
  VD.insert(discipline3);
  VD.print();

  return 0;
}
