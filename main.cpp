//Callum Babbs
//Simple implementation of singly linked list

#include "linkedlist.h"

int main(void) {

    //initializing list
    LinkedList myList;

    //Insert some nodes at the end of the list
    myList.insertNodeAtEnd(1);
    myList.insertNodeAtEnd(420);
    myList.insertNodeAtEnd(20);
    myList.printList();


    //Insert a node at the start
    myList.insertNodeAtStart(69);
    std::cout << std::endl;
    myList.printList();

    //Insert a node at position three in the list
    myList.insertNodeAtPos(3, 50);
    std::cout << std::endl;
    myList.printList();


    //delete node at position 1
    myList.deleteNode(3);
    std::cout << std::endl;

    std::cout << "The final elements in the list are:\n";
    myList.printList();
    std::cout << std::endl;

    return 0;
}