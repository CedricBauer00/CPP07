#include "../inc/iter.hpp"

void    print_int( const int& x )
{
    std::cout << x;
}

void    print_char( const char& c )
{
    std::cout << c;
}

int main()
{
    std::string str = "Hello world";

    ::iter( str.data(), str.length(), print_char );


    int int_array[] = { 1, 2, 3, 4, 5, 6 };
    ::iter( int_array, 6, print_int );

    return ( 0 );
}