#include <iostream>

#include <fstream>

void arch_prueba ();
void arch_lectura ();
using namespace std;

//Piramide, el usuario asigna la cantidad de * y _ estan en el triangulo 
int main()
{
   
arch_prueba ();//
arch_lectura ();

    return 0;
}void arch_prueba(){

  
int num;
   ofstream archivoprueba;
  

    archivoprueba.open("piramide.txt",ios::out);
 
   do
    {
     int num;
  cout << "digite el tamanio de la piramide : ";
  cin >> num;
  int lado = num;
  for (int i = 0; i < num; i++){
    if (i%2 ==0){
      for (int i = 0; i < lado; i++){
      archivoprueba<< "* ";
     }
     archivoprueba <<endl;
    }
    else 
    {
      for (int i = 0; i < lado; i++){
      archivoprueba << "- ";
      }
      archivoprueba <<endl;
    }
    lado--;
  }
    }
   while(num!=0);
  
   
   
   archivoprueba.close();

  

       }
    void arch_lectura (){
   string texto;
   int num; 
   ifstream archivoprueba;
   archivoprueba.open("piramide.txt",ios::in);
   
  while(!archivoprueba.eof())

    {
     getline(archivoprueba,texto);
         
        cout<<texto<<endl;
    }
   archivoprueba.close(); 
}

