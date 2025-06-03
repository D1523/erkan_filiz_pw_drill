void pw_swap(int *a, int *b)
{
    int temp;

    temp = *a;  // a'nın değeri yedekleniyor
    *a = *b;    // b'nin değeri a'ya aktarılıyor
    *b = temp;  // temp (eski a) b'ye yazılıyor
}
