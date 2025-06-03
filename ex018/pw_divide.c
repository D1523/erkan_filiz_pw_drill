int pw_divide(float *a, float *b, float *r)
{
    // NULL kontrolü
    if (a == 0 || b == 0 || r == 0)
        return 1;

    // Sıfıra bölme kontrolü
    if (*b == 0.0f)
        return 1;

    // Bölme işlemi
    *r = *a / *b;
    return 0;
}

