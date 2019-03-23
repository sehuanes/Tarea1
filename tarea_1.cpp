//https://github.com/sehuanes/Tarea1.git



/*hecho por JULIAN DOSMAN y FRANCISCO SEHUANES*/


#include<string>
#include <stdio.h> 
#include <math.h>
#include<iostream>

using namespace std;

#define True 1
#define False 0

bool ok_chscrb = False;


void NumStringToInt(string numero)
{
	string num = numero; /* NO borre esta linea de codigo */
	int t=num.size();
	int c=0,x,y, total=0;
  

	if(t>2){
		cout<<"el numero ingresado es demasiado grande1";
	}
	else{
	    t=t-1;
		x=num[0];
		y=num[1];
		if(((t==11) && (x==45) && (y<50)) || ((t<=10) && (x==45) && (y<50)) ||((t==10) && (x>=48) && (x<50)) || ((t<10) && (x>=48) && (x<=57))){
			while (t >= 0){
			    x=num[t];
			    y=x-48;
			    if(t > 0){
			        total=total+(y*pow(10,c));
			    }
			    else{
			        if(x==45){
			            total=total*(-1);
			        }
			        else{
			        	total=total+(y*pow(10,c));
					}
			    }     
			t-=1;
			c+=1;
			}
			cout<<"El numero ingresado es: "<<total<<endl;
		}
		else{
			cout<<"el numero ingresado es demasiado grande2";
		}
	}
	
}

void CheckScrabble (string &palabra1, string &palabra2)
{
    ok_chscrb = False; /*Por favor NO borre esta linea de codigo*/

    //De aqui en adelante se debe implementar la lógica en código de C++

    int tpalabra1 = palabra1.size();
    int tpalabra2 = palabra2.size();

    bool correcto_o_incorrecto;

    for(int i=0; i<tpalabra1;i++)					//For para convertir en minusculas
    {
        if((palabra1[i]>=97) && (palabra1[i] <= 122))
            palabra1[i] = palabra1[i] + 64;

        if((palabra2[i]>=97) && (palabra2[i] <= 122))
            palabra2[i] = palabra2[i] + 64;
    }


    for(int i=0; i<tpalabra1; i++)						//For para recorrer el vector
    {
        correcto_o_incorrecto=false;
        for(int j=0; j<tpalabra2; j++)
        {
            if(palabra1[i] == palabra2[j])
               correcto_o_incorrecto=true;
        }
        if(!correcto_o_incorrecto)
            break;
    }


    if(correcto_o_incorrecto)
        ok_chscrb=true;

    /*************************************************************/
    /*Por favor NO borre las lineas de codigo siguientes */
    if(ok_chscrb)
        cout<<"Tienen las mismas letras"<<endl;
    else
        cout<<"No tienen las mismas letras"<<endl;
}

struct Clase
    {
        char mem1 = 'D';
        double mem2 = 12345678987654321.88888888888889;
        unsigned short mem3 = 4554;
        float mem4 = 3.14159;
        long long int mem5 = 5444333222;
        char mem6 = 'X';
        int mem7 = 434776;
        double mem8 = 2.35656778457911;
    } ;

void printStruct(void)
{
    struct Clase local_struct; /*NO borre esta linea con la declaracion de la estructura local_struct */

    //De aqui en adelante se debe implementar la lógica en código de C++
    struct Clase *ptr=&local_struct;
    struct Clase *ptr2;
    struct Clase mem1;

    ptr2=&mem1;
    ptr=ptr2;

    //puntero = &local_struct;
    //cout <<(ptr+2)<< endl;
        cout <<*((char*)ptr)<< endl;
        cout <<*((double*)ptr+1)<< endl;
        cout <<*((unsigned short *)ptr+8)<< endl;
        cout <<*((float *)ptr+5)<< endl;
        cout <<*((long long int *)ptr+3)<< endl;
        cout <<*((char*)ptr+32)<< endl;
        cout <<*((int *)ptr+9)<< endl;
        cout <<*((double *)ptr+5)<< endl;
     
}

int main()
{
	//1.
	string number = "";
	cout<<"ingrese numero entero entre ( -1 a 99 )== ";
  cin >> number;
	NumStringToInt(number);
	cout<<endl;

  //2.
  string pw1 = "";
    string pw2 = "";
    cout << "Ingrese palabra1: ";
    cin >> pw1;
    cout << "Ingrese palabra2: ";
    cin >> pw2;

    CheckScrabble (pw1, pw2);
    cout<<endl;

  //3.
    printStruct();
}