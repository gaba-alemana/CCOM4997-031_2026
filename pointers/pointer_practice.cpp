# include <iostream>
# include <string>

int main(){

    // Small Pointer Review

    // What is a pointer? 

        /* A data type that saves an address of a variable. As the name implies, it points to a variable, which is a delimited section in memory.
        
        Syntax: data_type * pointer_name 
        Example: int * ptr_num 

        Important operators for pointers: 

        (*) asterisk
          - Used to define pointers
          - Dereferences a pointer (Accesses the value stored in an address)
          - Multiplication of ints, floats

        (&) ampersand
          - Logic AND operator
          - Gives the address of a variable
        
        */

    // Example    
    int num = 42 ;
    int other_num = 5 ;
    std::string word = "Hello World" ; 

    // Declaring a pointer to an integer
    int * ptr_num ;

    // Always initialize to nullptr to avoid pointing to a random space in memory
    ptr_num = NULL ;

    /*
    
        When a pointer is defined, we specify the data type we want it to point to. If we try to save the address
        of a different data type in the pointer or if we try to save any other value that is not a valid address, the program will throw an error.

        ptr_num = &word ; will raise an error

    */

    // ptr_num = &word ;

    // Displaying the variables 
    std::cout << "Displaying the original values in the variables: \n" ;
    std::cout << "\tNum variable: " << num << "\n";
    std::cout << "\tPointer variable: " << ptr_num << "\n\n" ;


    // Save the address of the int variable in the pointer
    // &num accesses the address of num
    std::cout << "Initializing the pointer: " << "\n" ;
    ptr_num = &num ;

    // Pointing to the variable
    std::cout << "\tNum variable address: " << &num << "\n" ;
    std::cout << "\tValue stored in pointer variable: " << ptr_num << "\n" ;
    std::cout << "\tDereferencing the pointer: " << *ptr_num << "\n\n" ;

    // Changing the value of num through the pointer
    // *ptr_num accesses the value stored in the address the pointer contains (dereferences)
    *ptr_num = 2 ;

    // Displaying changes
    std::cout << "After editing the num variable through the pointer...\n" ; 
    std::cout << "\tDereferencing the pointer: " << *ptr_num << "\n" ;
    std::cout << "\tNum variable: " << num << "\n\n" ;

    /* 
        We can create a pointer to a pointer using double asterisks.

        Syntax: data_type_of_pointer_to_save ** pointer_name
        Example: int ** ptr_ptr_num

        *ptr_ptr_num - dereferences the pointer once; sees the direction of the pointer saved
        **ptr_ptr_num - dereferences the pointer twice, being able to access and alter the variable the pointer being pointed, points to

    */

    // Pointer to a pointer
    int ** ptr_ptr_num = NULL ;
    ptr_ptr_num = &ptr_num ;

    // Displaying values
    std::cout << "Pointer to a pointer: \n" ;
    std::cout << "\tOriginal pointer address: " << &ptr_num << "\n" ;
    std::cout << "\tValue stored in pointer to int pointer variable: " << ptr_ptr_num << "\n" ;

    std::cout << "\tDereferencing the pointer to a pointer once: " << *ptr_ptr_num << "\n" ;
    std::cout << "\tDereferencing the pointer to a pointer twice: " << **ptr_ptr_num << "\n\n\n" ;


    /* 
        Pointer usage with arrays
        We can declare a pointer and initialize it to the first element of an array of a specific data type.
        This lets us iterate through the array.
    */
    const int size = 10 ;
    int int_list[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} ;
    int * arr_ptr = int_list ;

    std::cout << "Pointers with arrays:\n\n" ;

    // Without pointers
    std::cout << "Iterating through a list without pointers: " ;
    for(int i = 0; i < size; i++){

      std::cout << int_list[i] << " " ;
    }

    // With pointers
    std::cout << "\nIterating through a list with pointers: " ;
    for(int i = 0; i < size; i++){

      std::cout << *(arr_ptr + i) << " " ;
    }

    /* 
      Why does this work? 
      When adding an integer to a pointer, we are adding the size of the data type it points to.
      Since an int occupies 8 bytes, arr_ptr + 1 = arr_ptr + 8 bytes, arr_ptr + 2 = arr_ptr + 16 bytes, and so on.
      Pointer arithmetic works with the size or space the data type the pointer points to occupies.
      We can also use the unary increment and decrement operator with pointers.

    */

    // Pointers with unary increment operator
    std::cout << "\nIterating through an array with pointer++: " ;
    for(int i = 0; i < size; i++){

      std::cout << *(arr_ptr++) << " " ;
    }

    /*
        Pointers with unary decrement operator
        From the last for loop, the pointer is pointing to the next space in memory outside the array.
        We need to decrement the pointer first to then dereference it to display the values in the array.
    */ 
   
    std::cout << "\nIterating through an array from end to beggining with pointer--: " ;
    for(int i = size - 1; i >= 0; i--){

      std::cout << *(--arr_ptr) << " " ;
    }

    return 0 ;
}