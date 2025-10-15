#pragma once

#include <string>
#include <iostream>

template <typename t>

void   swap( t &a, t &b )
{
    t   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename t>

const t&    min( t &a, t &b ) //reference == good practice, would work aswell with only copy
{
    if ( a == b )
        return ( b );
    else if ( a > b)
        return ( b );
    else
        return ( a );
}

template <typename t>

const t&    max( t &a, t &b )
{
    if ( a == b )
        return ( b );
    else if ( a > b )
        return ( a );
    else
        return ( b ); 
}
