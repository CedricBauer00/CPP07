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

template <typename t>

void   swap( t &a, t &b )
{
    t   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename t>

const t&    min( t &a, t &b )
{
    return ( a < b ? b : a );
}

// const t&    min( t &a, t &b ) //reference == good practice, would work aswell with only copy
// {
//     if ( a == b )
//         return ( b );
//     else if ( a > b)
//         return ( b );
//     else
//         return ( a );
// }

template <typename t>

const   t&  max( t &a, t &b )
{
    return ( a > b ? b : a );
}

// const t&    max( t &a, t &b )
// {
//     if ( a == b )
//         return ( b );
//     else if ( a > b )
//         return ( a );
//     else
//         return ( b ); 
// }
