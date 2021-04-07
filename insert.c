#include "defs.h"
#include "buffer.h"

void insert(char *str) {
    buffer_t buffer;
    strcpy(buffer.buf, str);
    printf("insert: %s\n", buffer.buf);
}
