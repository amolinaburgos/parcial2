#include "Vendor.hpp"

Vendor::Vendor(string code, string name) 
: code(code), name(name) 
{
    //usamos la lista de inicializadores que es más eficiente.
}

Vendor::~Vendor()   // solo a modo de prueba
{
    cout << "Vendor destruido" << endl;
}

string Vendor::getCode() 
{
    return code;
}

string Vendor::getName() 
{
    return name;
}
