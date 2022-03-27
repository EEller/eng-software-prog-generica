#include "../src/Student.h"
#include "../src/Discipline.h"
#include "../src/OrderedSet.h"
#include "../src/UnOrderedSet.h"
#include "string"
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

// Essa função contem os testes necessários para garantir da classe estudante.
void unitTestStudent();
// Essa função contem os testes necessários para garantir da classe disciplina.
void unitTestDiscipline();

int main() {
  unitTestStudent();
  unitTestDiscipline();
  return 0;
}

void unitTestStudent(){
  Student<string, string> student1("Joao", "M202201");
  assert(student1.getName() == "Joao");

  Student<string, string> student2("Maria", "M202202");
  assert(student2.getRegistration() == "M202202");

  Student<string, string> student3("FELIPE", "M202203");
  student3.setName("PEDRO");
  assert(student3.getName() == "PEDRO");

  UnOrderedSet < Student<string, string> > VS(student1);
  VS.insert(student2);
  VS.insert(student3);
  int count = VS.count();
  assert(count == 3);
}

void unitTestDiscipline(){
  Discipline<string, string> discipline1("AEDS1", "CCO01");
  assert(discipline1.getName() == "AEDS1");

  Discipline<string, string> discipline2("Logica", "CCO02");
  assert(discipline2.getCode() == "CCO02");

  Discipline<string, string> discipline3("MD", "CCO03");
  discipline3.setName("PORT");
  assert(discipline3.getName() == "PORT");

  UnOrderedSet < Discipline<string, string> > VD(discipline1);
  VD.insert(discipline2);
  VD.insert(discipline3);
  assert(VD.count() == 3);
}
