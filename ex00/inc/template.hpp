#pragma once

#include <string>
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BRIGHTBLUE  "\033[38;5;75m"

template <typename T>

void   swap( T &a, T &b )
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>

const T&    min( T &a, T &b )
{
    return ( b <= a) ? b : a;
}

// const T&    min( T &a, T &b ) //reference == good practice, would work aswell with only copy
// {
//     if ( a == b )
//         return ( b );
//     else if ( a > b)
//         return ( b );
//     else
//         return ( a );
// }

template <typename T>

const   T&  max( T &a, T &b )
{
    return ( b >= a ) ? b : a;
}

// const T&    max( T &a, T &b )
// {
//     if ( a == b )
//         return ( b );
//     else if ( a > b )
//         return ( a );
//     else
//         return ( b ); 
// }
