#include <stdio.h>
#include <stdlib.h>

void hello_world() {
    puts("Hello, World!");
}

char * get_aaa(int size) {

    char * str = malloc(size+1);

    for (int i = 0; i < size; ++i) {
        str[i] = 'a'; 
    }

    str[size] = 0;

    return str;

}

int str_len(const char * const str) {

    const char * end = str;
    while (*(++end) != 0);
    return end - str;

}

