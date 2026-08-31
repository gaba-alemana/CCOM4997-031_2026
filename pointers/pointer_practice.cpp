# include <iostream>
# include <string>

int main(){

    std::string nl = "\n" ;
    std::string tab = "\t" ;

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
    std::cout << "Displaying the original values in the variables: " << nl ;
    std::cout << tab << "Num variable: " << num << nl ;
    std::cout << tab << "Pointer variable: " << ptr_num << nl << nl ;

    // Save the address of the int variable in the pointer
    // &num accesses the address of num
    ptr_num = &num ;

    // Pointing to the variable
    std::cout << "Initializing the pointer: " << nl ;
    std::cout << tab << "Num variable address: " << &num << nl ;
    std::cout << tab << "Value stored in pointer variable: " << ptr_num << nl ;
    std::cout << tab << "Dereferencing the pointer: " << *ptr_num << nl << nl ;

    // Changing the value of num through the pointer
    // *ptr_num accesses the value stored in the address the pointer contains
    *ptr_num = 2 ;

    // Displaying changes
    std::cout << "After editing the num variable through the pointer..." << nl ; 
    std::cout << tab << "Dereferencing the pointer:" << *ptr_num << nl ;
    std::cout << tab << "Num variable: " << num << nl << nl ;

    /* 
        We can create a pointer to a pointer using double asterisks.

        Syntax: data_type_of_pointer_to_save ** pointer_name
        Example: int ** ptr_ptr_num

        *ptr_ptr_num - dereferences the pointer once, being able to access the direction of the pointer saved
        **ptr_ptr_num - dereferences the pointer twice, being able to access and alter the variable the pointer being pointed, points to

    */

    // Pointer to a pointer
    int ** ptr_ptr_num = NULL ;
    ptr_ptr_num = &ptr_num ;

    // Displaying values
    std::cout << "Pointer to a pointer: " << nl ;
    std::cout << tab << "Original pointer address: " << &ptr_num << nl ;
    std::cout << tab << "Value stored in pointer to int pointer variable: " << ptr_ptr_num << nl ;

    std::cout << tab << "Dereferencing the pointer to a pointer once: " << *ptr_ptr_num << nl ;
    std::cout << tab << "Dereferencing the pointer to a pointer twice: " << **ptr_ptr_num << nl ;

    // Pointer usage with arrays
    const int size = 10 ;
    int int_list[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} ;
    int * arr_ptr = int_list ;

    // Without pointers
    for(int i = 0; i < size; i++){

      std::cout << int_list[i] << " " ;

    }

    // With pointers 
    for(int i = 0; i < size; i++){

      std::cout << *(arr_ptr + i) << " " ;

    }

    return 0 ;
}