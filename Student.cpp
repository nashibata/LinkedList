#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

student::Student() {

}

char* student::getName() {
  return name;
}

int* student::getID() {
  return &ID;
}

float* student::getGPA() {
  return &GPA;
}
