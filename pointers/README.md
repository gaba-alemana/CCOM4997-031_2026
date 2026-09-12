# Practicando punteros y memoria dinámica con clases

## Clase para crear arreglos dinámicos de enteros con lógica de Queues
#### Atributos
```
protected:
  
  int *arr = NULL ; 
  int used = 0 ; 
  int length = 0 ; 

```

#### Métodos
```
public:
  IntArray(int) ;
  ~IntArray() ;
  void set_length (int) ;
  void insert (int) ;
  void resize (int) ;
  void remove () ;
  void display () const ;
  int* max () const ;
  void swap () ;
  IntArray& overload= (const IntArray &) const ;
  bool overload> (const IntArray &) const ;
  bool overload== (const IntArray &) const ;
  friend ostream& overload<< (ostream &, const IntArray &) ;

  
```
