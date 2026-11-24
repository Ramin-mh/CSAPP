#include <stdio.h>

typedef unsigned char *char_pointer;

void show_bytes(char_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    putchar('\n');
}

void show_int(int x)
{
    show_bytes((char_pointer) &x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((char_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((char_pointer) &x, sizeof(void *));
}

/* For testing */
int main(void)
{
    int i = 2607352;
    float f = (float) i;

    show_int(i);
    show_float(f);

    return 0;
}
