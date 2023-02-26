//Callum Babbs
//Implementation of singly linked list

#include "linkedlist.h"

int main(void) {

    //initializing list
    LinkedList myList;

    //Insert some nodes
    myList.insertNodeEnd(1);
    myList.insertNodeEnd(420);
    myList.insertNodeEnd(20);

    //print out the list
    myList.printList();

    //delete node at position 1
    myList.deleteNode(1);

    std::cout << "The final elements in the list are:\n";
    myList.printList();
    std::cout << std::endl;

    return 0;
}