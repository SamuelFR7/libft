#include "libft.h"

size_t *ft_strlen(const char *str) {
    int qtd_char;

    qtd_char = 0;
    while (*str) {
        qtd_char++;
        str++;
    }

    return qtd_char;
}
