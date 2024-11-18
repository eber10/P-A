#include<iostream>
#include<string>
using namespace std;
class Persona
{
    protected:
        string nombre;
        string DNI;
        int edad;
    public:
        Persona(string, string, int);
        void mostrarDatos();
};
Persona::Persona(string _nombre, string _DNI, int _edad)
{
    nombre=_nombre;
    DNI=_DNI;
    edad=_edad;
}
void Persona::mostrarDatos()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Dni: "<<DNI<<endl;
    cout<<"Edad: "<<edad<<endl;
}
//clase derivada de Persona, la cual será la clase docente
class Docente:public Persona
{
    private:
        int sueldo;
        string especialidad;
    public:
        Docente(string, string, int, int, string);
        void mostrarDocente();
};
Docente::Docente(string _nombre, string _DNI, int _edad, int _sueldo, string _especialidad):Persona(_nombre, _DNI, _edad)
{
    sueldo=_sueldo;
    especialidad=_especialidad;
}
void Docente::mostrarDocente()
{
    mostrarDatos();
    cout<<"sueldo: "<<sueldo<<endl;
    cout<<"especialidad: "<<especialidad<<endl;
}
//clase derivadad de la clase persona, la cuál será la clase Estudiante
class Estudiante:public Persona
{
    private:
        int notas[5];
        int nNotas;
        string codigo;
    public:
        Estudiante(string, string, int, int[], int, string);
        void mostrarEstudiante();
};
Estudiante::Estudiante(string _nombre, string _DNI, int _edad, int _notas[], int _nNotas, string _codigo):Persona(_nombre, _DNI, _edad)
{
    nNotas=_nNotas;
    for(int i=0; i<nNotas; i++)
    {
        notas[i]=_notas[i];
    }
    codigo=_codigo;
}
void Estudiante::mostrarEstudiante()
{
    mostrarDatos();
    cout<<"tienes un estudiante con codigo "<<codigo<<" y tiene "<<nNotas<<" notas";
    cout<<endl;
    for(int i=0; i<nNotas; i++)
    {
        cout<<notas[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    string nombre;
    Persona p1("pablo", "34562345", 23);
    p1.mostrarDatos();
    Docente d1("maribel", "56345624", 12, 300, "maestra");
    d1.mostrarDocente();
    int nota[]={12, 13, 17, 11, 10};
    cout<<"Ingrese el nombre del estudiante: "; cin>>nombre;
    cout<<endl;
    Estudiante e1(nombre, "23541235", 16, nota, 5, "2022-12424");
    e1.mostrarEstudiante();
    return 0;

}