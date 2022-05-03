#include <iostream>

/* Capturar los cinco datos más importantes de un Empleado, incluyendo el sueldo diario y los días trabajados desplegarle su cheque semanal 
solo si ganó más de $500.00 en la semana, en caso contrario desplegarle un bono de despensa semanal de $150.00.*/


using namespace std;
int main(int argc, char** argv) {
	string name, puesto, direccion;
	int dias, sueldo;
	int totsuel;
	
	
	cout<<"Ingrese el nombre del empleado"<<endl;
	cin>>name;
	cout<<"Ingrese el puesto del empleado"<<endl;
	cin>>puesto;
	cout<<"Ingrese la direccion del empleado"<<endl;
	cin>>direccion;
	cout<<"Ingrese el sueldo diario del empleado:  $"<<endl;
	cin>>sueldo;
	cout<<"Ingrese los dias trabajados a la semana del empleado"<<endl;
	cin>>dias;
	
	
	totsuel=dias*sueldo;
	
	
	if (totsuel>500){
		cout<<"Su cheque semanal es del monto de: $" <<totsuel<<endl;
	}
	else{
		
		cout<<"Su sueldo es menor de $500, por lo tanto se le dara un bono de despensa de $150"<<endl;
		
		
	}
	system("pause");
}
