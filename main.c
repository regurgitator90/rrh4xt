#include "defs.h"

int main(int argc, char **argv) {
    if (argc > 1)
        kbd(argv[1]);
    if (argc > 2)
        display(argv[2]);
    if (argc > 3)
        command(argv[3]);
    if (argc > 4)
        insert(argv[4]);
    return 0;
}
