#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

student::Student(const char* newname, int newID, float newGPA) {
  strcpy(name, newname);
  ID = newID;
  GPA = newGPA;
}

student::~Student() {
  delete name;
}

char* student::getName() {
  return name;
}

int student::getID() {
  return ID;
}

float student::getGPA() {
  return GPA;
}
