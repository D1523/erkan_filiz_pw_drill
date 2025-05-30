#include <unistd.h>

void pw_count_to_n(unsigned int n)
{
    for (unsigned int i = 0; i <= n; i++)
    {
        char c = '0' + i;         // sayıyı karaktere çevir
        write(1, &c, 1);          // karakteri yaz
        write(1, "\n", 1);        // yeni satır
    }
}
