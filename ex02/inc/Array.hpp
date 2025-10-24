#pragma once

#include <string>
#include <iostream>
#include <cstddef>

template <typename T>

class Array
{
private:
    unsigned int    _size;
    T*              _array;
public:
    Array() : _size( 0 ), _array( nullptr ) { std::cout << "\e[32mDefault Array constructor!\e[0m" << std::endl; }
    Array( unsigned int n ) : _size( n ), _array( n ? new T[n]() : nullptr ) {std::cout << "\e[32mParametric Array constructor!\e[0m" << std::endl;}
    Array( const Array& copy ) : _size( copy._size ), _array( copy._size ? new T[copy._size]() : nullptr )
    {
        std::cout << "\e[31mCopy Array constructor!\e[0m" << std::endl;
        for ( unsigned int i = 0; i < copy._size; i++ )
            this->_array[ i ] = copy._array[ i ];
    }


    Array& operator=( const Array& copy )
    {
        if ( this != &copy ) // Selbstzuweisungscheck
        {
            //neuen Speicher temporaer allokieren in Pointer
            // aber ich weiss nicht ob ich hier:  machen soll
            T* temp = copy._size ? new T[copy._size]() : nullptr;
            try
            {
                for ( unsigned int i = 0; i < copy._size; ++i )
                    temp[ i ] = copy._array[ i ];
            }
            catch(...) //cathces all exception types
            {
                delete[] temp;
                throw ;
            }
            
            delete[] _array;
            this->_array = temp;  //Inhalt kopieren
            this->_size = copy._size; //Inhalt kopieren
            return( *this ); //alten speicher loeschen
        }
        return( *this );
    }
    ~Array()
    {
        std::cout << "\e[31mArray destructor\e[0m" << std::endl;
        delete[] _array;
    }
    
    unsigned int size() const
    {
        return ( this->_size );
    } //returns the size of the array -- number of elements

};
