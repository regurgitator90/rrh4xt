#include "defs.h"

int main(int argc, char **argv) {
    if (argc > 1)
        kbd(argv[1]);
    if (argc > 2)
        display(argv[2]);
    return 0;
}
