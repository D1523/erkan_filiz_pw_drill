#include <unistd.h>

void pw_count_reverse(unsigned int n)
{
    for (int i = n; i >= 0; i--)
    {
        char c = '0' + i;      // Sayıyı karaktere dönüştür
        write(1, &c, 1);       // Karakteri yaz
        write(1, "\n", 1);     // Yeni satıra geç
    }
}
