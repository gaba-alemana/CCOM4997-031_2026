# include <iostream>
# include "sll.h"

// Testing Singly Linked List Implementation
int main() {

    SLList<int> list1 ;
    list1.enqueue(26) ;
    list1.enqueue(7) ;
    list1.enqueue(-2) ;
    list1.enqueue(8) ;

    list1.display() ;
    list1.rem_specific(-2) ;
    list1.rem_specific(26) ;
    list1.display() ;
}
