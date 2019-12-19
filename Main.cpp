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
    currentNode->setNext(new Node(student));
    currentNode->getNext()->setStudent(student);
  }
}

void print(Node* a) {
  if (a == head) {
    cout << "list:" << endl;
  }
  if (a != NULL) {
    cout << "/ Name: " << a->getStudent()->getName();
    cout << ", ID: " << a->getStudent()->getID();
    cout << ", GPA: " << fixed << setprecision(2) << a->getStudent()->getGPA() << endl;
    print(a->getNext()); //recursive function
  }
}

int main() {
  bool running = true;

  while (running == true) {
    char input[50];
    char name[50];
    int id = 0;
    float gpa = 0.00;
    cout << "would you like to add a student or exit the program?" << endl;
    cin.get(input, 50);
    cin.clear();
    cin.ignore(100, '\n');

    if (strcmp(input, "add") == 0) {
      cout << "Please anwer the following..." << endl;
      cout << "Name?" << endl;
      cin.get(name, 50);
      cin.clear();
      cin.ignore(100, '\n');

      cout << "ID?" << endl;
      cin >> id;
      cin.clear();
      cin.ignore(100, '\n');

      cout << "GPA?" << endl;
      cin >> gpa;
      cin.clear();
      cin.ignore(100, '\n');

      add(name, id, gpa);
      print(head);
    }
    else if (strcmp(input, "exit") == 0) {
      running = false;
    }
    else {
      cout << "invalid response" << endl;
    }
  }
}
