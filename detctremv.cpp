// LINKED LIST 
// Detection and Removal of Cycle in Linked List 

#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node (int val){
        data = val;
        next = NULL;
    }
};

bool detectCycle (node* & head, int val){
    node* slow = head;
    node* fast = head;
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;

        if (fast == slow){
            return true;
        }
    }
    return false;
}

void removeCycle (node* & head){
    node* slow = head;
    node* fast = head;
    do
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    } while (slow != fast);
    fast = head;
    while (slow -> next != fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next;
    }
        slow -> next = NULL;
    removeCycle(head);
    return 
    
    
}