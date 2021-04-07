#include "defs.h"
#include "buffer.h"
#include "command.h"

void files(char *str) {
    buffer_t buffer;
    command_t command;
    strcpy(buffer.buf, str);
    strcpy(command.buf, str);
    printf("files: %s %s\n", buffer.buf, command.buf);
}
