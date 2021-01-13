//
// file: program.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.hpp"
#include <cstdio>
#include <cstdlib>

//
// Greet the user
//
const char * greet(void)
{
    return "Hello, C++ Developer.";
} // end of functions greet

//
// foundation of the program and related
// application logic must be implemented
// in the foundation.
//
int foundation(int argc, char **argv)
{
    for(int iter = 1; iter < argc; ++iter)
    {
        printf("%s", *(argv + iter));
        if(iter < argc - 1)
        { // Print a space at the end
            putc(' ', stdout);
        } // end if
    } // end for
    return EXIT_SUCCESS;
} // end of function foundation
