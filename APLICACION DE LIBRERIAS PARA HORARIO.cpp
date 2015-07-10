#include<iostream>
#include<conio>
#include<fstream>
#include<stdio>
main()
{
 char caracter[20];
 ofstream archivo("C:/BC5/MI ARCHIVO/MI PROYECTO2.txt",ios::app);
 gets(caracter);
 archivo<<caracter<<'\n';
 archivo.close();
 getch();
}
