#include <string.h>
#include <stdio.h>

int main(int numberOfArgs, char** args) {
    printf("It runs\n");

    printf("There are %d arguments\n", numberOfArgs);

    printf("The first two arguments are: %s, %s\n", args[1], args[2]);
}