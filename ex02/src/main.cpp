#include "../inc/Array.hpp"

int main()
{
    // ============ Canonical form tests ============ //
    std::cout << "--------- Canonical form tests ---------" << std::endl;
    
    Array<int>   defauld;
    Array<int>   arr( 5 );
    Array<int>   copy( arr );

    std::cout << MAGENTA << "'default' array, has length of " << defauld.size() << RESET << std::endl;
    
    std::cout << MAGENTA << "'arr' array, has length of " << arr.size() << RESET << std::endl;

    std::cout << MAGENTA << "'copy' array, has length of " << copy.size() << RESET << std::endl;

    std::cout << "Assigning: copy = defauld" << std::endl; 
    try
    {
        copy = defauld;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    std::cout << BRIGHTBLUE << "After assigning... 'copy' array, has length of " << copy.size() << RESET << std::endl;

    // ===== cant print because array does not contain anything... ===== //
    try
    {
        std::cout << defauld[ 0 ] << std::endl;
    }
    catch ( const std::exception&e)
    {
        std::cout << RED << "defauld[ 0 ] threw: " << e.what() << RESET << std::endl;
    }
    // ===== element does not exist in array ===== //
    try
    {
        ( void )copy[ 100 ];
    }
    catch(const std::exception& e)
    {
        std::cout << RED << "copy[ 100 ] threw: " << e.what() << RESET << std::endl;
    }
    
    arr[ 0 ] = 42;
    arr[ 4 ] = -6;
    std::cout << "arr[ 0 ]= " << arr[ 0 ] << "; arr[ 4 ]= " << arr[ 4 ] << std::endl;
    // ===== element does not exit, in bounds check after assigning ===== //
    try
    {
        ( void )arr[ 5 ];
    }
    catch(const std::exception& e)
    {
        std::cout << RED << "arr[ 5 ] threw: " << e.what() << RESET << std::endl;
    }

    // read only
    const Array<int>& c = arr;
    std::cout << "const read c[ 0 ] = " << c[ 0 ] << std::endl;

    // c[ 1 ] = 10;
    
    // ============ different datatypes ============ //

    {
        std::cout << "\n--- Datatype tests ---\n" << std::endl;
        
        Array<char> c(4);
        c[0] = 'A';
        c[1] = 'B';
        c[2] = 'C';
        c[3] = 'D';
        std::cout << YELLOW << "chars: " << c[0] << c[1] << c[2] << c[3] << RESET << std::endl;
        
        Array<unsigned int> ui(3);
        ui[0] = 1u;
        ui[1] = 442u;
        ui[2] = 1000u;
        std::cout << YELLOW << "unsigned int: " << ui[0] << ui[1] << ui[2] << RESET << std::endl;

        Array<float> f(3);
        f[0] = 6.54f;
        f[1] = 99.23f;
        f[2] = 123.123f;
        std::cout << YELLOW << "float: " << f[0] << f[1] << f[2] << RESET << std::endl;

        Array<std::string> s(3);
        s[0] = "Hello ";
        s[1] = "World";
        s[2] = "!";
        std::cout << YELLOW <<"string: " << s[0] << s[1] << s[2] << RESET << std::endl;
        
    }

    // int * a = new int();
    // std::cout << "int *a = " << *a << std::endl;
    // delete( a );
    
    return ( 0 );
}