#include "queue.h"

queue::queue(){
  head = NULL; // default is empty
}

void queue::enqueue(char data){
  // create node
  node* new_node = new node;
  new_node->data = data;
  new_node->next = NULL;
  // add node to tail
  if (head == NULL){
    head = new_node;
  } else {
    node* temp_pointer = head;
    while (temp_pointer->next != NULL){
      temp_pointer = temp_pointer->next;
    }
    temp_pointer->next = new_node;
  }
}

char queue::dequeue(){
  if (head == NULL){
    return 0;
  } else {
    char temp;
    node* temp_node;
    temp = head->next->data;
    temp_node = head->next;
    delete(head);
    head = temp_node;
    return temp;
  }
}

void queue::print(){
  node* temp_pointer = head;
  while(temp_pointer != NULL){
    cout << temp_pointer->data;
    temp_pointer = temp_pointer->next;
  }
}