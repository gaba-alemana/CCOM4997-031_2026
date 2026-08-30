# include <iostream>
# include <cmath> // To use cmath.pi for calculations
# include <stdexcept> // To throw standard exceptions/errors for input validation


// Creating a Circle Class
class Circle {
    
    /*  Defining and initializing the attributes (variables)
        Setting them as private to avoid outside modification   */ 
    private:
        
        double radius ;
        double pi = cmath.pi ;


    // Defining methods (functions)
    public:

        /*  Default constructor 
            We can initialize the radius attribute to 5.0 as a default.
            There are two ways to initialize the attributes; the first one is more compact.
            The second one initializes the variable inside the brackets, but they both have the same purpose.   */
        
        // First way
        Circle() : radius(5.0) {}
        
        // Second way
        // Circle() { radius = 5.0 ; }


        // Function for the user to set/change the radius
        void set_radius(double rad) {

            // Input validation (the radius cannot be less than zero)
            if (rad < 0){
                throw std::invalid_argument("The radius of a circle must be a positive number.") ;
            }

            // Set radius
            radius = rad ;
        }


        /*  Parameterized constructor
            Create a circle instance with a radius specified by the user    */
        Circle(double rad ) {

            // Call set_radius function which checks for input validity to set the radius
            set_radius(rad);
        }


        // Calculating the circumference of the circle
        double calc_circumference() {

            circumf = radius * pi * 2 ;
            return circumf ;
        }


        /*  Overloading the assignment operator
            
        
        */ 
        Circle operator= (Circle circle2) {


        }





} ;