#include "linkedlist.h"

Node::Node() {
    data = 0;
    next = NULL;
}

Node::Node(int data) {
    this->data = data; //this keyword refers to the current instance of the class
    this->next = NULL;
}


void LinkedList::deleteNode(int nodeOffset) {
    Node* temp1 = head;
    Node* temp2 = NULL;
    int listLength = 0;

    //Checks if list is empty
    if (head == NULL) {
        std::cout << "The list is empty.\n";
    }

    //Loop that finds the length of the linked list
    while (temp1 != NULL) {
        temp1 = temp1->next;
        listLength++;
    }

    //Checks if the position to be deleted is greater than the length of the list
    if (nodeOffset > listLength) {
        std::cout << "Index is out of range.\n";
        return;
    }

    temp1 = head;

    //Deletes the head of the list
    if (nodeOffset == 1) {

        //update head
        head = head->next;
        delete temp1;
        return;
    }

    //Start at the end of the list and traverse back until the node to be deleted is found
    while (nodeOffset-- > 1) {

        //making temp2 head
        temp2 = temp1;

        //update temp1
        temp1 = temp1->next;
    }

    //Change the next pointer of the previous node
    temp2->next = temp1->next;

    //delete the node
    delete temp1;
}

//Function to insert a new node at the end of the list
void LinkedList::insertNodeEnd(int data) {

    //Create the new node
    Node* newNode = new Node(data);

    //Assign to head if list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }

    //Traverse till the end of the list
    Node* temp = head;
    while (temp->next != NULL) {

        //update temp
        temp = temp->next;
    }

    //insert at the end of list
    temp->next = newNode;
}

void LinkedList::printList() {
    Node* temp = head;

    //Check if the list is empty
    if (head == NULL) {
        std::cout << "The linked list is empty\n";
        return;
    }

    //Traverse the list and print out data at each node
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
}