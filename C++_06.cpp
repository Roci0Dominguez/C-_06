//Yareli del Rocio Perez Dominguez
#include <iostream>
#include <vector>
#include <string>

using namespace std; 

int main(){
    
    //declara un vector de cadenas
     vector<string> aves ={"loro","Paloma de Diamante","Coctel "};
      std::cout <<" Los valores del vector antes de insertar: \n" << std::endl;
         
         //Recorre el vector para imprimir los valores
        for(int i=0; i<aves.size(); ++i){
             std::cout << aves[i] <<"" << std::endl;
         }
                cout<<"\n";
        //Agrega tres nuevos elementos al final del vector utilizando push_back()
               aves.push_back("Mayna");
               aves.push_back("Periquitos");
               aves.push_back("Cacatúa");
               
                std::cout <<" Los valores del vector antes de insertar:\n" << std::endl;
                
                        for(int i=0; i<aves.size(); i++){   //itera sobre el vector para imprimir los valores 
                         
                               cout<<aves[i]<<" ";
                     }
                     cout<<"\n";
                     return 0;
}
