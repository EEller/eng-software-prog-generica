#include "../src/Student.h"
#include "../src/UnOrderedSet.h"
#include "string"
#include <iostream>
#include <stdio.h>
#include <assert.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
  Student<string, string> student1("Fulano", "M202201");
  UnOrderedSet < Student<string, string> > VS(student1);
  int count = VS.count();
  assert (count==0);

  return 0;
}