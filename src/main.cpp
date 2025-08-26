#include <iostream>
#include <string>

using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

// learning pointers and reference
void funcPointers(int *a, int *b)
{
    int tmp = *a;   // tmp var data is saved in a
    *a = *b;        // a value pass to b
    *b = tmp;       // tmp value pass to b
}

void funcReference(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char **argv)
{
    int x = 10, y = 20;
    // int a;
    // float numvver;
    // int a, b, c;
    // int b(4)
    // int c{2}
    // int foo = 0;
    // auto bar = foo; // Reconoce el inicializador
    // decltype(foo) bar;  // Deduce el tipo
    // declare vars
    string mystring;
    double r = 5.0;
    double circle;
    circle = 2 * PI * r; // maths
    mystring = "C++ program";
    float xx = 3.7;
    bool condition = true;
    int yy = (int)x;
    // concat
    funcPointers(&x, &y);
    std::cout << "Hola mundo" << std::endl;
    std::cout << "I'm a " << mystring << NEWLINE;
    std::cout << "Swap pointers: x=" << x << " y="<< y << NEWLINE;
    funcReference(x, y);
    std::cout << "Swap reference: x=" << x << " y="<< y << NEWLINE;
    return 0;
}