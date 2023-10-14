#include <iostream>

using namespace std;

template <typename T>
T getSmallerElement(T a, T b) {
    return (a < b) ? a : b;
}

template <typename T, typename S>
T getSmallerElementWithTwoTypes(T a, S b) {
    return (a < b) ? a : b;
}

int main()
{

    // Pruebas de la plantilla con arguemenos numericos del mismo tipo.

    int two = 2, three = 3;
    long four = 4.0, six = 6.0;
    double five = 5.0, ten = 10.0;


    int intResult = getSmallerElement(two, three);
    long longResult = getSmallerElement(four, six);
    long doubleResult = getSmallerElement(five, ten);

    cout << "Llamadas a la funcion con un argumento: \n";
    cout << boolalpha << (two == intResult) << endl;
    cout << boolalpha << (four == longResult) << endl;
    cout << boolalpha << (five == doubleResult) << endl;
    cout << endl;

    // Prueba con argumentos de distinto tipo

    int fifty = 50;
    long sixty = 60.0;

    // Esto nos da un error ya que la plantilla establece que los argumentos seran del mismo tipo
    // int badCallResult = getSmallerElement(fifty, sixty);

    //cout << boolalpha << (fifty == badCallResult) << endl;

    int twenty = 20;
    long fourty = 40.0;

    int goodCallResult = getSmallerElementWithTwoTypes(twenty, fourty);

    cout << "Llamada a la funcion con dos argumentos: \n";
    cout << boolalpha << (twenty == goodCallResult) << endl;


    return 0;
}
