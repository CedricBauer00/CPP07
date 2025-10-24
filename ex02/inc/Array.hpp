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
    Array() : _size( 0 ), _array( nullptr ) {}
    Array( unsigned int n ) : _size( n ), _array( new T[n]() ) {}
    Array( const Array& copy ) : _size( copy._size), _array( new T[copy._size]() )
    {
        if (copy._size == 0)
        {
            this->_array = nullptr;
        }
        // Array other( copy._size, copy._array );
        for ( unsigned int i = 0; i < copy._size; i++ )
            this._array[ i ] = copy._array[ i ];
    }


    Array& operator=( const Array& copy )
    {
        if ( this != &copy )
        {
            this->size = copy.size;
            this->_array = copy._array;
        }
        return ( *this );
    }
    ~Array();

    static unsigned int size(); //returns the size of the array -- number of elements

};
