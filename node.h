#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

class Node{
 public:
  Node(); //constructor
  ~Node(); //destructor
  
  //getters and setters

  Node* getNext();
  void  setNext(node*);
  Student* getStudent();
  void setStudent(student*);
 private:
  Node* next;
  Student* student; //this is the variable that connects a node to a student
};
#endif
