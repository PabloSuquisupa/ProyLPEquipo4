#include<iostream>
#include<conio>
#include<fstream>
#include<stdio>


//F1= PRIMER BOTON - INGRESAAR HORA DE CLASE
int hora_1,hora_2,materia,semestre;//condicion de obligatorio
char dia [3];
char diacompleto [10];
bool ban;
         cout>>"ingrese nombre de materia\n";
         cin<<materia;
         cout>>"ingrese el semestre\n";
         cin<<semestre;
         cout>>"ingres el dia(LUN,MART,MIE,JUE,VIE)\n";
         	//ingresar la condicion de LUN=LUNES, etc.
            cin<<dia ;
            switch(dia);
            do
            	if (stramp(dia, "LUN")==0)
               streepy(diacompleto, "Lunes");
               {
               	ban = 1;
               	ban = true;
               }

               else if (stramp(dia, "MAR")==0)
               streepy(diacompleto, "Martes");
               {
                	ban = 1;
               	ban = true;
               }

               else if (stramp(dia, "MER")==0)
               streepy(diacompleto, "Mercoles");
               {
               	ban = 1;
               	ban = true;

               else if (stramp(dia, "JUE")==0)
               streepy(diacompleto, "Jueves");
               {
               	ban = 1;
               	ban = true;
               }

               else (stramp(dia, "VIE")==0)
               streepy(diacompleto, "Viernes");
               {
               	ban = 1;
               	ban = true;
               }

               	else cout<<"valor no definido, vuelva a ingresar. "; ban = 0;
            while(ban == 0);


            getch();
            }

         cout>>"ingrese hora de incio de la clase\n";
         cin<<hora_1;
         cout>>"ingrese la hora del termino de clase\n";
         cin<<hora_2;
cout>>"hora ingrasada: \n";
    cout>>dia": " hora_1" - "hora_2"\n";
    cout>>semestre"\n";
    cout>>materia;



//F2= SEGUNDO BOTON - VER HOARIO DE HOY

//F3= TERCER BOTON - VER HORARIO DE LA SEMANA

//F4= CUARTO BOTON - SALIR



main()

{

getch();
}


