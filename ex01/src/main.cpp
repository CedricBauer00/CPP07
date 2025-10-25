#include "../inc/iter.hpp"

void    print_int( const int& x )
{
    std::cout << MAGENTA << x << RESET;
}

void    print_char( const char& c )
{
    std::cout << GREEN << c << RESET;
}

void    toUpperChar( char& c )
{
    c = static_cast<char>( std::toupper( static_cast<unsigned char>( c ) ) );
}

int main()
{
    std::cout << BRIGHTBLUE << "\n----- char test -----" << RESET << std::endl;

    std::string str = "Hello world";

    ::iter( str.data(), str.length(), print_char );

    std::cout << BRIGHTBLUE << "\n\n----- Int test -----" << RESET << std::endl;

    int int_array[] = { 1, 2, 3, 4, 5, 6 };
    ::iter( int_array, 6, print_int );
    
    std::cout << BRIGHTBLUE << "\n\n----- toUpperChar test -----" << RESET << std::endl;

    std::cout << "Before toUpper(): " << YELLOW << str << RESET << std::endl;

    if ( !str.empty() )
        ::iter( &str[0], str.size(), toUpperChar );
    
    std::cout << "After toUpper(): " << YELLOW << str << RESET << std::endl;
    
    std::cout << std::endl;

    return ( 0 );
}

// Das hier ist mein evaluation sheet fuer diese Aufgabe:

// EX01:iter
// This exercise is about writing a generic function to iterate through arrays.

// Does it work?
// Test the following code with the evaluated students iter:
// class Awesome
// {
//     public:
//     Awesome(void):_n(42) {return;}
//     int get(void) const {return this->_n;}
//     private:
//     int _n;
// };
// std::ostream & operator<<(std::ostream & o, Awesome const & rhs) { o << ths.get(); return o;}
// template<typename T>
// void print(T const & x) { std::cout << x << std::endl; return; }
// int main()
// {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];

//     iter( tab, 5, print);
//     iter( tab2, 5, print);

//     return 0;
// }

// If everything went well, it should display:

// 0
// 1
// 2
// 3
// 4
// 42
// 42
// 42
// 42
// 42