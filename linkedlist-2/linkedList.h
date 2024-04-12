#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

//define the list node
struct node{
  int num;
  node *next;
};

class linkedList
{
 public:
  linkedList();
  
  void insertAtEnd(int x);
  void print() const;

  //make some changes -- version 1

  //make some more changes -- version 2
  
 private:
  node *head;
  node *tail;
  int count;

};





#endif
