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
  Circle operator+ (Circle) const ;
  Circle operator+ (int) const ;
  Circle operator* (Circle) const ;
  Circle operator- (Circle) const ;
  Circle operator= (Circle) ;
  friend ostream& operator<< (ostream, Circle) ;
  friend Circle operator+ (int, Circle) ;

  
```

### En esta clase Círculo, estudiamos la sobrecarga de operadores y el uso de funciones amigas.
