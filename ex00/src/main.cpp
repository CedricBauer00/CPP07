#include "../inc/template.hpp"

// int main( void ) {
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// return 0;
// }


int main( void )
{
    std::cout << BRIGHTBLUE << "\n----- int test -----" << RESET << std::endl;
    {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << YELLOW << "min( a, b ) = " << ::min( a, b ) << RESET << std::endl;
        std::cout << YELLOW << "max( a, b ) = " << ::max( a, b ) << RESET << std::endl;
        std::cout << "\nSame value should return second param" << std::endl;
        std::cout << YELLOW << "min( a, b ) = " << ::min( a, a ) << RESET << std::endl;
        std::cout << YELLOW << "max( a, b ) = " << ::max( b, b ) << RESET << std::endl;
    }
    std::cout << BRIGHTBLUE << "\n----- std::string test -----" << RESET << std::endl;
    {
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << YELLOW << "min( c, d ) = " << ::min( c, d ) << RESET << std::endl;
        std::cout << YELLOW << "max( c, d ) = " << ::max( c, d ) << RESET << std::endl;
    }
    return ( 0 );
}

// Das ist das evaluation sheet zu dieser aufgabe:

// EX00: Start with a few functions
// This exercise is about writing 3 simple function templates: swap(), min() and max().

// Simple types
// Refer to the subject for the expected output with simple types, such as int.

// Complex types
// Do the functions also work with complex types such as:
// class Awesome
// {
//     public:
//     Awesome(void):_n(0) {}
//     Awesome(int n):_n(n) {}
//     Awesome & operator=(Awesome & a) { _n = a._n; return *this; }
//     bool operator==(Awesome const &rhs) const { return ( this->_n == rhs._n);}
//     bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n);}
//     bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n);}
//     bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n);}
//     bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n);}
//     bool operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n);}
//     int get_n() const { return _n;}
//     private:
//     int _n;
// };
// std::ostream & operator<<(std::ostream & o, const Awesome &a) {o << a.get_n(); return o;}

// int main(void)
// {
//     Awesome a(2), b(4);

//     swap(a, b);
//     std::cout<< a << " " << b << std::endl;
//     std::cout << max(a, b) << std::endl;
// }