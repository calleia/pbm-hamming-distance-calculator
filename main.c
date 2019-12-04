#include <stdio.h>

int main(int argc, char** argv) {
    if (argc == 3) {
        FILE* pFirstFilename = fopen(argv[1], "r");
        FILE* pSecondFilename = fopen(argv[2], "r");

        // TODO: read images
        // TODO: calculate hamming distance
    } else {
        fprintf(stderr, "Invalid number of arguments.");
    }

    return 0;
}
