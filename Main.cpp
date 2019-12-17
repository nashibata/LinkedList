#include <iostream>
#include <iomanip>

#include "node.h"
#include "student.h"

using namespace std;

Node* head = NULL;

void add(char* name, int id, float gpa) {
  Student* student = new Student(name, id, gpa);
  Node* currentNode = head;
  if (currentNode == NULL) {
    head = new Node(student);
    head->setStudent(student);
  }
  else {
    while (currentNode->getNext() != NULL) {
      currentNode = currentNode->getNext();
    }
    currentNode->setNext(new Node(newstudent));
    currentNode->getNext()->setStudent(newstudent);
  }
}

void print(Node* a) {
  if (a == head) {
    cout << "list:" << endl;
  }
  if (a != head) {
    cout << "/ Name: " << a->getStudent()->getName() << ", ID: " << a->getStudent()->getID() << fixed << setprecision(2) << ", GPA: " << a->getStudent()->getGPA << endl;
    print(a->getNext()); //recursive function
  }
}

int main() {
  char name[50] = "Nick S";
  int id = 420009;
  float gpa = 4.20;
  add(name, id, gpa);
  print(head);
  
}
