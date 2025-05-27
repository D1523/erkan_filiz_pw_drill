#include <unistd.h>

void pw_triangle(void)
{
    write(1, "a\n", 2);     // 1. satır
    write(1, "aa\n", 3);    // 2. satır
    write(1, "aaa\n", 4);   // 3. satır
}
