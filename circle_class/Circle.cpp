# include <iostream>
# include "Circle.h"

int main() {

    // Testing Circle class object

    // Initializing object circle1 with default constructor
    // Checking that the radius was set to default (5.0)
    Circle circle1 = Circle() ;
    std::cout << "The radius of circle1 is: " << circle1.get_radius() << "\n\n";

    
    // Changing the radius with our set_radius() function
    circle1.set_radius(2.4) ;
    std::cout << "The new radius of circle1 is: " << circle1.get_radius() << std::endl ;


    // Initializing object circle2 with the parameterized constructor
    Circle circle2 = Circle(12) ;
    std::cout << "The radius of circle2 is: " << circle2.get_radius() << "\n\n" ;


    // Creating a new circle instance with the sum of both previous circles
    // This is possible because we overloaded the addition (+) operator
    std::cout << "Adding the radius of circle1 and circle2 to create circle3!" << std::endl ;
    Circle circle3 = circle1 + circle2 ;

    std::cout << "The radius of circle3 is: " << circle3.get_radius() << std::endl ;
    std::cout << "The circumference of circle3 is: " << circle3.calc_circumference() << "\n\n" ;


    // Defining and initializing circle4 as the multiplication of circle1 and circle2
    std::cout << "Multiplying the radius of circle1 and circle2 to create circle3!" << std::endl ;
    Circle circle4 = circle1 * circle2 ;
    std::cout << "The radius of circle4 is: " << circle4.get_radius() << "\n\n" ;


    // Testing the default assignment overload operator
    std::cout << "Copying circle4 on circle5." << std::endl ;
    Circle circle5 = circle4 ;
    std::cout << "The radius of circle5 is: " << circle5.get_radius() << std::endl ;


    return 0 ;
}