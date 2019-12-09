//header guards
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class student{
 public: //public functions
  Student(const char*, int, float);
  ~Student();
  char* getName();
  int getID();
  float getGPA();
 private: //private variables
  char name[50];
  int ID;
  float GPA;
};

#endif
