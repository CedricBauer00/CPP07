#include "../inc/iter.hpp"

// = = = = = = = = = Evaluation sheet tests = = = = = = = = = //
// why was nothing said about that in the actual subject sheet???

class Awesome
{
    private:
        int _n;
    public:
        Awesome( void ) : _n(42) {}
        int get( void ) const { return this->_n; }
};

std::ostream& operator<<( std::ostream& o, Awesome const& rhs )
{
    o << rhs.get();
    return o;
}

template <typename T>
void print( T const& x ) { std::cout << x << std::endl; }

// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = //

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
    {
        std::string str = "Hello world";

        ::iter( str.data(), str.length(), print_char );
    }
    
    std::cout << "\n--- const char ---\n";
    {
        std::string const str = "Hello world";

        ::iter( str.data(), str.length(), print_char );
    }
    
    std::cout << BRIGHTBLUE << "\n\n----- Int test -----" << RESET << std::endl;
    {
        const int int_array[] = { 1, 2, 3, 4, 5, 6 };
        ::iter( int_array, 6, print_int );
    }
    
    std::cout << BRIGHTBLUE << "\n\n----- toUpperChar test -----" << RESET << std::endl;
    {
        std::string str = "I am Batman!";

        std::cout << "Before toUpper(): " << YELLOW << str << RESET << std::endl;

        if ( !str.empty() )
            ::iter( &str[0], str.size(), toUpperChar );
        
        std::cout << "After toUpper(): " << YELLOW << str << RESET << std::endl;
        
        std::cout << std::endl;
    }

    std::cout << BRIGHTBLUE << "----- evaluation sheet test -----" << RESET << std::endl;
    {
        int tab[] = {0, 1, 2, 3, 4};
        Awesome tab2[5];

        iter(tab, 5, print); // should ouput 0, ... 4
        iter(tab2, 5, print); // shoudl print 42 5 times
    }
    return ( 0 );
}
