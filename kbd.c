#include "defs.h"
#include "command.h"

void kbd(char *str) {
    command_t command;
    strcpy(command.buf, str);
    printf("kbd: %s\n", command.buf);
}
