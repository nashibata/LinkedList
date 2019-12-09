#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

class node{
 public:
  node(student*);//constructor
  
  //getters and setters
  node* getNext(node*);
  void setNext(node*);
  student* getStudent();
  void setStudent(student*);
 private:
  node* next;
  student* student; //this is the variable that connectsa node to a student
};
#endif
