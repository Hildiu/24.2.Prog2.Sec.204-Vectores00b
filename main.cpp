#include <iostream>
#include <vector>
#include <iomanip>
using namespace  std;

int main()
{ int n;

    cout << "Numero de elementos : ";
    cin >> n;
    vector<int> vec(n);
    //--- ahora leemos datos desde el teclado
    int contador =0;
    for(auto &i:vec)
    {
        cout << "Dato " << contador << " : ";
        cin >> i;
        contador = contador +1;
    }
    //--- recorremos el vector
    cout << "\n";
    for( const auto &i:vec)
        cout <<  setw(5) << i;

    return 0;
}
