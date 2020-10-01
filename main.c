#include <stdio.h>
#include <stdlib.h>

#include "test.h"


int main(int argc, const char * argv[]) {

    hello_world();
    char * aaa = get_aaa(15);
    int len = str_len(aaa);
    printf("Length of '%s' is %d\n", aaa, len);
    free(aaa);

}

