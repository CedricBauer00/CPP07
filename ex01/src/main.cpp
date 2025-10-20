#include "../inc/iter.hpp"

void    print_int( const int& x )
{
    std::cout << x << std::endl;
}

int main()
{
    std::string str = "Hello world";

    ::iter( str, str.length(), print_int() )

    return ( 0 );
}