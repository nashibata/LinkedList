#include <iostream>
#include <cstring>
#include <vector>

#include "node.h"
#include "student.h"

using namespace std;

node::Node(student*) {
  
}

node* node::getNext(node*) {
  return next; 
}

void node::setNext(node*) {

}

student* node::getStudent() {
  return student;
}

node::~Node() {

}
