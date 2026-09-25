// Working with Singly Linked Lists
# include <iostream>

// To create link lists with specific node elements
template <typename T>
class SLList {

    // Node class
    class Node {

        public: 

            Node * next ; // Point to the next node
            T element ; // Element of type T

            // Default constructor
            Node() {
                next = nullptr ;
            }

            // Parameterized constructor
            Node(T thing) {
                element = thing ;
                next = nullptr ;
            }

    };

    Node * head ; // Beginning of singly linked list

    public:

        // Constructor
        SLList() {
            head = nullptr ;
        }


        // Add node to the end of the list
        void enqueue(T thing) {

            // Create new node
            Node * node = new Node(thing) ;

            if (head == nullptr){ // The list is empty
                head = node ;
            }

            else { // The list at least has one node

                // Create a temporary pointer to iterate through the nodes of the list
                Node * temp = head ; 
                while (temp -> next != nullptr) {
                    temp = temp -> next ;
                }

                // Add the node when the end of the list is reached
                temp -> next = node ;
            }
        }


        // Remove a specific node 
        void rem_specific(T value) {

            if (head == nullptr) { // The linked list has no nodes to remove
                std::cout << "The linked list has no nodes." << std::endl ;
            }

            else { 

                Node * temp = head ;

                if (head -> element == value) { // Check if the first node is the one to remove
                    head = head -> next ;
                    delete temp ;
                }

                else { // The node is not the head

                    // To save the previous node while iterating
                    Node * current = temp ;

                    while(temp -> element != value) {
                        current = temp ; // Save the current node we are on
                        temp = temp -> next ; // Move to next node
                    }

                    // Connect the rest of the list and remove the specific node
                    current -> next = temp -> next ;
                    delete temp ; 

                }
            }
        }


        // Remove beginning node
        void dequeue() {

            if (head == nullptr) {
                std::cout << "The linked list has no nodes." << std::endl ;
            }

            else {

                // Create a temporary pointer to head node
                Node * temp = head ; 
                head = head -> next ;
                delete temp ;
            }
        }


        // Display linked list
        void display() const {

            if (head == nullptr) {
                std::cout << "The linked list has no nodes." << std::endl ;
            }

            else {

                // Temporary pointer to iterate the sll
                Node * temp = head ; 

                while (temp != nullptr) {
                    std::cout << temp -> element << " " ;

                    // Move to the next node
                    temp = temp -> next ;
                }
                std::cout << std::endl ;
            }
        }

};

