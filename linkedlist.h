#ifndef linkedlist_h
#define linkedlist_h

#include <iostream>

//Node class that represents a node of the linked list
class Node {

public:
    int data;
    Node* next;

    //Default constructor - used to initialize member objects
    Node();

    //Parameterised constructor
    Node(int data);


};


//Linked list class that implements a linked list
class LinkedList {
    Node* head;

public:

    //Default Constructor
    LinkedList();

    //Function that inserts a node at the start of the list
    void insertNodeAtStart(int);

    //Function that inserts a node at a given position in the list
    void insertNodeAtPos(int, int);

    //Function that inserts a node at the end of the list
    void insertNodeAtEnd(int);

    //Function to print the linked list
    void printList();

    //Function to delete the node at given position
    void deleteNode(int);

};

#endif