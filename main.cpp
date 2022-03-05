#include "archivo.cpp"
#include <iostream>

using namespace std; 

main(){
	
	string nombres, apellidos, curso;
	int codigo, nota1, nota2, nota3, nota4;
	float n, promedio;
	
	cout <<"PROGRAMA QUE CALCULA LA N CANTIDAD DE ESTUDIANTES QUE SOLICITE"<<endl <<endl;
		
	cout <<"INGRESE LA CANTIDAD DE DATOS QUE DESEA PROCESAR:     "; cin >> n;
	
	for (int i = 1; i <= n; i++) {
		
		system("cls");

		cout << "Ingrese el Codigo del Estudiante:     "; cin >> codigo;
		cout << "Ingrese los Nombres:     "; cin >> nombres;
		cout << "Ingrese los Apellidos:     "; cin >> apellidos;
		cout << "Ingrese el Curso:     "; cin >> curso;
		cout << "Ingrese la primera Nota:     "; cin >> nota1;
		cout << "Ingrese la segunda Nota:     "; cin >> nota2;
		cout << "Ingrese la tercera Nota:     "; cin >> nota3;
		cout << "Ingrese la cuarta Nota:      ";	cin >> nota4;
		
		promedio = (nota1 + nota2 + nota3 + nota4) / 4;
		
		cout << "\nEL PROMEDIO DEL ESTUDIANTES ES:     " << promedio << endl;
		
			if (promedio<60){
				cout <<"\nLAMENTABLEMENTE ESTE ALUMNO A REPROBADO" << endl;
			}
			else
			{
				cout <<"\nFELICIDADES ESTE ALUMNO APROBO EL CURSO" <<endl;
			}
		
		archivo obj = archivo(nombres,apellidos,curso,nota1,nota2,nota3,nota4,codigo);
		obj.mostrar();
		
		cout << endl;
		
		system("pause");
	}
	
}
