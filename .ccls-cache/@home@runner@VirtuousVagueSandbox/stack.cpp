#include "stack.h"

stack::stack(){
  head = NULL;
}

void stack::push(char data){
  node* new_node = new node;
  new_node->data = data;
  new_node->next = head;
  head = new_node;
}

char stack::pop(){
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

char stack::peek(){
  if (head == NULL){
    return 0;
  } else{
    return head->data;
  }
}
  
void stack::print(){
  node* temp_pointer = head;
  while(temp_pointer != NULL){
    cout << temp_pointer->data;
    temp_pointer = temp_pointer->next;
  }
}