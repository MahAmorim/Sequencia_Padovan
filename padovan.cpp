#include <cstdlib>
#include <iostream>

using namespace std;

/*Calcular padovan*/
int pad(int n);
  
int main() 
{ 

    int x;
    cout << "Sequencia Padovan"<<"\n\n"<<"Definida por P(n)=P(n-2)+P(n-3) e P(1)=P(2)=P(3)=1"<<"\n\n";
    cout<<"\n\n"<<"Digite posicao desejada: "<<"\n\n";
    cin>>x;
    cout<<"\n\n"<<"Primeiros "<<x<<" Elementos da Seuqencia Padovan"<<endl;
    
    for (int n=1;n<=x;n++)
    {
       cout<<"\n"<<pad(n)<<"  "<<"\n";
    }
    cout<<"\n\n";

    return EXIT_SUCCESS;
}

int pad(int n) 
{ 
    /* p0, p1 , p2 = 1 */
   if(n==1 || n==2 || n==3)
       return 1;
   else
       return pad(n-2)+ pad(n-3);
} 
