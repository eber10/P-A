#include<iostream>//libreria utilizada para leer valores, imprimir valores(entrada, salida).
#include<iostream>//libreria utilizada para trabajar con el tipo de dato de cadena de caracteres(texto).
using namespace std;//artificio utilizado para evitar escribir el prefijo std::
 class Persona//estructura de programación orientada a objetos(P.O.O).
 {
    //--------atributos(caracteristicas)---------
    private://dentro de la clase definimos los datos privados y públicos, que son parte de la etapa de encapsulamiento.
        int edad;
        string nombre;
    //---------métodos(acciones)-----------------
    public://dato público.
        Persona(int, string);//constructor, utilizado para inicializar a los atributos.
        void leer();
        void correr();
 };
 Persona::Persona(int _edad, string _nombre)//definimos la función constructor.
 {
    edad=_edad;
    nombre=_nombre;
 }
 void Persona::leer()//definimos la función leer.
 {
    cout<<"soy "<<nombre<<" y estoy leyendo una obra, ademas tengo "<<edad<<" anios"<<endl;
 }
 void Persona::correr()//definimos la función correr.
 {
    cout<<"soy "<<nombre<<" y estoy corriendo una maraton, ademas tengo "<<edad<<" anios"<<endl;
 }
int main()//función principal.
{
    Persona p1(23, "valeria");//creamos un objeto de la clase persona.
    p1.leer();
    Persona p2(24, "noelia");//creamos otro objeto de la clase persona.
    p2.correr();
    return 0;
}