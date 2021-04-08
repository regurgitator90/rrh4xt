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
    if (argc > 5)
        search(argv[5]);
    if (argc > 6)
        files(argv[6]);
    if (argc > 7)
        utils(argv[7]);
    return 0;
}
