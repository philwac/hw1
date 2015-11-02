#include <iostream>
using namespace std;

// Funktionen
int fibo(int z){
    if(z == 1)
         return 0;
    if(z==1 || z==2)
        return 1;
    else
        return fibo(z-1)+fibo(z-2);
}



// Hauptprogramm
int main() {

    for(int i=1; i<=1; i++)
        cout << "Fibo: " << fibo(11) << endl;

  
    return 0;
}