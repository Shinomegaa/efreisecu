#include "unistd.h"

//You have to create a C function that should take a char in parameter and print it

int main() {
    char c;
    for (c = 'A'; c <= 'Z'; ++c)
        printf("%c ", c);
    return 0;
}
