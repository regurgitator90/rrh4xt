#include "defs.h"
#include "buffer.h"

void display(char *str) {
    buffer_t buffer;
    strcpy(buffer.buf, str);
    printf("display: %s\n", buffer.buf);
}
