#pragma once

#include <string>
#include <iostream>
#include <cstddef>

template <typename T, typename F>

void    iter( T *array, const size_t length, F func ) // for non const
{
    //  a == address of an array
    //  b == length of the array, const
    //  c == function that will be called in every element of the array

    for ( size_t i = 0; i < length; i++ )
    {
        func( array[i] );
    }
    std::cout << std::endl;
}

template <typename T, typename F>

void    iter( const T *array, const size_t length, F func ) //overload for const
{
    //  a == address of an array
    //  b == length of the array, const
    //  c == function that will be called in every element of the array

    for ( size_t i = 0; i < length; i++ )
    {
        func( array[i] );
    }
    std::cout << std::endl;
}

// Subject:

// Chapter V
// Exercise 01: Iter
// Exercise: 01
// Iter
// Directory: ex01/
// Files to Submit: Makefile, main.cpp, iter.{h, hpp}
// Forbidden: None
// Implement a function template iter that takes 3 parameters and returns nothing.
// • The first parameter is the address of an array.
// • The second one is the length of the array, passed as a const value.
// • The third one is a function that will be called on every element of the array.
// Submit a main.cpp file that contains your tests. Provide enough code to generate a
// test executable.
// Your iter function template must work with any type of array. The third parameter
// can be an instantiated function template.
// The function passed as the third parameter may take its argument by const reference
// or non-const reference, depending on the context.
// Think carefully about how to support both const and non-const
// elements in your iter function.