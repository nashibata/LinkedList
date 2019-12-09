#include <iostream>
#include <cstring>
#include <vector>

#include "node.h"
#include "student.h"

using namespace std;

node::node(student*) { //default class
  student = NULL;
  next = NULL;
}

node* node::getNext(node*) { //function to call the next node in the link
  return next; 
}

void node::setNext(node* nextnode) { //sets the next node
  node = nextnode;
}

student* node::getStudent() { //gets the student information connected to a given node
  return student;
}

void node::setStudent(student* newstudent) { //sets the student that is to connect to a node
  student = newstudent;
}

node::~Node() {
  delete &student;
  next = NULL;
}
