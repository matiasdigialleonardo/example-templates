#include <iostream>

using namespace std;

// 1

template <typename ReturnType, typename ArgumentType>
ReturnType increaseOneAndChangeType(ArgumentType arg) {
    return ++arg;
}

// 2 

template <typename T>
class MyClass {
public:
    T myAttribute;

    MyClass(T valor) : myAttribute(valor) {}

    void showAttribute()
    {
        cout << "This class attribute is : " << myAttribute << endl;
    }

    // Puedes agregar métodos y funciones miembro que utilizan 'miAtributo'
};

// 3

template <typename ArgumentType, typename ReturnType>
class MyTemplateClass {
public:
    ArgumentType argument;

    MyTemplateClass(ArgumentType arg) : argument(arg) {}

    ReturnType castToReturnType() {
        return static_cast<ArgumentType>(argument);
    }
};


int main()
{
    // 1
    /* ----------------------------------------------------
    int five = 5;

    long longFive = increaseOneAndChangeType<long,int>(five);

    cout << longFive;
    ----------------------------------------------------- */ 

    // 2
    /* ----------------------------------------------------
    
    MyClass<string>* myClass = new MyClass<string>("Perro");

    myClass->showAttribute();

    delete myClass;

    ---------------------------------------------------- */

    // 3

    /* ----------------------------------------------------
    
    int five = 5;
    long six = 6;

    MyTemplateClass<int, long>* myTemplateClass = new MyTemplateClass<int, long>(five);

    long fiveLong = myTemplateClass->castToReturnType();

    delete myTemplateClass;

    ---------------------------------------------------- */


    return 0;
}