# Clase Circle
### Ejemplo de definición y declaración de clases en C++

#### Clase para crear objetos con propiedades de un círculo.


#### Atributos
```
private:
  double radius ;
  const double pi = 3.1415 ;

```

#### Métodos
```
public:
  void set_radius(double) ;
  double get_radius() const ;
  double calc_circumference() const ;
  double calc_area() const ;
  Circle overload+ (Circle) const ;
  Circle overload* (Circle) const ;
  Circle overload- (Circle) const ;
  Circle overload= (Circle) ;

  
```
