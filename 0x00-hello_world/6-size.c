#include <stdio.h>

void print_size(const char* name, size_t size) {
    const char* plural = (size == 1) ? "" : "s";
    printf("Size of a %s: %lu byte%s\n", name, size, plural);
}

int main(void) {
    print_size("char", sizeof(char));
    print_size("int", sizeof(int));
    print_size("long int", sizeof(long int));
    print_size("long long int", sizeof(long long int));
    print_size("float", sizeof(float));
    return 0;
}
