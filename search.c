#include "defs.h"
#include "buffer.h"

void search(char *str) {
    buffer_t buffer;
    strcpy(buffer.buf, str);
    printf("search: %s\n", buffer.buf);
}
