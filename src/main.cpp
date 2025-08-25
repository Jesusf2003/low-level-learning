#include <iostream>
#include <string>

using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main(int argc, char **argv)
{
    /*
    int a;
    float numvver;
    int a, b, c;
    int b(4)
    int c{2}
    int foo = 0;
    auto bar = foo; // Reconoce el inicializador
    decltype(foo) bar;  // Deduce el tipo
    */
    // declare vars
    string mystring;
    double r = 5.0;
    double circle;
    circle = 2 * PI * r;    // maths
    mystring = "C++ program";
    float x = 3.7;
    bool condition = true;
    int y = (int)x;
    // concat
    std::cout << "Hola mundo" << std::endl;
    std::cout << "I'm a " << mystring << NEWLINE;
    return 0;
}