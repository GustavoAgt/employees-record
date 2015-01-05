#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;



struct{
string dni2;
char nombre[20];
char apellido[20];
char apellido2[20];
int  anio; 
char mes[2];
int  dia;
int edad;
char cargo[5];
int sueldo;
}obj;



int main(){
    
	void opening();
	void showData();
	void calcafp();
	void cancelacion();
	cout <<"                  Bienvenido al sistema de registro de empleado"<<"\n \n";
	 
     int i = 0;
          
          while(i < 1){
          
          cout <<"********************************************************************************";
          
          i = i+1; 
          }
          
	
    
                
    cout <<"Elige una opcion:"<<"\n \n";
    cout <<"    0) Introducir datos"<<"\n";
    cout <<"    1) Desplegar datos via DNI"<<"\n";
    cout <<"    2) Calcular monto de ahorro en el AFP y el descuento de seguro de salud"<<"\n";
    cout <<"    3) Monto por cancelacion de contrato"<<"\n";
    cout <<"    4) Salir"<<"\n \n";
    
    
	 int ff = 0;
          
          while(ff < 1){
          cout <<"********************************************************************************";
                  ff = ff + 1;
                  }
	
    char a;
	cin >> a;

	switch(a){
 		
         case '0':
		     opening();
		break;
		
        case '1':
            system("cls");
			showData();
			
            break;
        case '2':
             calcafp();
             
        break;
        case '3':
             cancelacion();
             
        break;
       case '4':
             exit(0);
             
        break;
	
default:
        cout << "Usted no se sabe los numeros?, es del 0 al 4 que debe escojer!"<<endl;
        cout << "Cuente conmigo hasta 10"<<endl;
        system("PAUSE");
        int aa = 0;
        while(aa < 11){
                 cout << aa <<endl;
                 system("PAUSE");
                 aa = aa + 1;
                 }
     system("cls");
     main();  
        
	}

cin.get();
return 0;

}


     
     

void opening(){

void con();


             

// Salidas de bienvenida

cout << "                     Introduccion de datos del empleado" <<endl;
cout << "********************************************************************************"<<"\n \n"<< endl;

cout << "Introduzca su DNI"<< "> ";


  
  string dni;
  cin >> dni;
  obj.dni2 = dni;
  dni += ".txt";
  fstream fichero(dni.c_str(),fstream::out); //Se crea un archivo con ese nombre
       
  
cout << "Introduzca su nombre"<< "> ";
cin >> obj.nombre;
fichero << obj.dni2 <<" "<< obj.nombre <<" ";


cout << "Introduzca su apellido paterno"<< "> ";
cin  >> obj.apellido;
fichero << obj.apellido<<" "; 


cout << "Introduzca su apellido materno"<< "> ";
cin >> obj.apellido2;
fichero << obj.apellido2<<" ";

cout << "Introduzca edad"<< "> ";
cin >> obj.edad;
fichero << obj.edad<<" ";

cout << "Introduzca cargo"<< "> ";
cin >> obj.cargo;
fichero << obj.cargo <<" ";

cout << "Introduzca sueldo"<< "> ";
cin >> obj.sueldo;
fichero << obj.sueldo <<" ";


cout << "Introduzca el dia de ingreso a esta empresa"<< "> ";
cin >> obj.dia;
fichero << obj.dia<<" ";

cout << "Introduzca el mes de ingreso a esta empresa"<< "> ";
cin >> obj.mes;
fichero << obj.mes<<"  ";

cout << "Introduzca el año de ingreso a esta empresa"<< "> ";
cin >> obj.anio;
fichero << obj.anio<<" ";

fichero.close();

con();



         
         
              
}


               

// funcion de salido o continuacion

void con(){
     void con();
cout << " desea salir  ?" <<"\n \n" << "1)si" <<"\n"<< "2)no" <<endl;
char ex;
cin >> ex;

switch(ex){
           
       case '1':
            exit(0);
       
       break;
       
       case '2':
            system("cls");
            main();
            
            break;
       
       default:
          con();     
       cout <<"Introduzca si o no" <<endl;
               
}
}
///////////////////////////////////////////////////////


void showData(){
     void showData();
     void con();
     char cadena[10];
     
     string line;
     
     cout << "Introduzca DNI > ";
  string dni;
  cin >> dni;
  cout << "--------------------------------------------------------------------------------"<< "\n \n";
  cout <<"\n \n"; 
  dni += ".txt";
  fstream fichero(dni.c_str(),fstream::in); 
  
  
  
  if (fichero.is_open()) { 
     
     char* ar1[7];
      ar1[0]="DNI: ";
      ar1[1]="Nombre: ";
      ar1[2]="Apellido paterno: "; 
      ar1[3]="Apellido materno: "; 
      ar1[4]="Edad: "; 
      ar1[5]="Cargo: ";
      ar1[6]="Salario: ";
      cout<< "                              Datos de el empleado"<<endl;
      cout << "********************************************************************************"<<"\n \n"<< endl;
     int ll = 0;
     
     for (ll = 0;  ll < 10; ll++){
     while(ll < 10 & !fichero.eof()) { 
     
     cout << "--------------------------------------------------------------------------------"<< "\n \n";
     if (ll == 7 ){
            fichero >> obj.dia >> obj.mes >> obj.anio;
            cout << "Fecha: "<<obj.dia<< "/" << obj.mes << "/" << obj.anio <<"\n \n";
            cout << "--------------------------------------------------------------------------------"<< "\n \n";
             con(); 
            }
     cout << ar1[ll];
     fichero >> cadena;
     cout << cadena <<"\n \n";
     ll = ll + 1;
      
}

}
             
}  

else {
     cout <<"\n \n \n";
     cout << "Introducir un DNI valido" <<"\n \n \n";
     cout <<"********************************************************************************";
     
     con();
     }  
               
       
     }
     
     
     /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
     
     
     void calcafp(){
          void con();
          
          cout << "Introducir su DNI > ";
          string dni;
          cin >> dni;
          dni += ".txt";
          fstream fichero(dni.c_str(),fstream::in);
     fichero >> obj.dni2;
     if(fichero.fail()){
     cout<<"ERROR!";
       }
       
       else{
            while(!fichero.eof()){
             fichero >> obj.nombre >>obj.apellido >> obj.apellido2 >>obj.dia >> obj.cargo >>obj.sueldo >> obj.mes>> obj.anio>> obj.edad ;
            }
            
         int i = 0;
          
          while(i < 1){
          
          cout <<"********************************************************************************";
          
          i = i+1; 
          }
          
          
          
          
          
          
          ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
          
          cout <<"                              Reporte sobre su afp" << endl;
          
          
          
          cout << "\n" <<endl; 
          
               
          
          
            int anio, salary;
            double afp,tt,srs; 
            int arc, bic,cc,result;        
			anio = obj.anio;						      
			salary=obj.sueldo; 						     
			arc =2013 - anio;							
			bic=salary*12;								
			cc=bic*arc;									
			tt=cc*0.0272;								
			afp=salary*0.0272;							
			srs=salary*0.0301;	
			result=salary*2;					
			
			
			cout<<"*    Ahorro AFP: "<<tt<<"\n \n";
			cout<<"*    Descuento Mensual AFP: "<<afp <<"\n \n";
			cout<<"*    Descuento Mensual SFS: "<<srs<<"\n \n";
			cout<<"*    Monto Regalia: "<<result<< "\n \n";
			cout<<"*    Regalias Entregadas: "<<arc<<"\n \n";	
      
          }
         
          
          
          
     
          
          
         /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
           
                
          int ff = 0;
          
          while(ff < 1){
          cout <<"********************************************************************************";
                  ff = ff + 1;
                  }
          
          
          
          system("PAUSE");
          con();
          }
     
     void cancelacion(){
          void con();
          cout << "Introducir su DNI > ";
          string dni;
          cin >> dni;
          dni += ".txt";
          fstream fichero(dni.c_str(),fstream::in);
          fichero >> obj.dni2;
     if(fichero.fail()){
     cout<<"ERROR!";
       }
       
       else{
            while(!fichero.eof()){
             fichero >> obj.nombre >>obj.apellido >> obj.apellido2 >>obj.edad >> obj.cargo >>obj.sueldo >> obj.dia >> obj.mes>> obj.anio;
            }
               int anio, salary, arc, bic, c,d, z; 
				anio=obj.anio;						      
				salary=obj.sueldo; 						     
				arc=2013-anio;							
				bic=salary*12;								
				c=bic*arc;
				d=(salary/24)*15;
				z=(d+c);
				
				cout<<"Monto por Cancelacion con vacaciones: "<<c<<"\n \n";
				cout<<"Monto por Cancelacion sin vacaciones: "<<z<< "\n \n";
				
                
          
          
          
          
          }
     system("PAUSE");
     con();
     }
     
     
          
