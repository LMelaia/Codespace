// Little test to see if using a string, you could print out the contents of the PC's memory.

#include <stdio.h>
#include <string.h>

int main(void) {
    char * test = "";

    char * test1 = "This is a test String";

    int test2 = 65;

    int test3 = 66;

    char * test4 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAA BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";

    for(int i = 0; i < 1000000; i++) {
        printf("%i, ", test[i]);
    }
}