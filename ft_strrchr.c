#include "libft.h"

#include <stdio.h>

char *ft_strrchr(const char *s, int c) {
	size_t len;

	len = strlen(s);
	while (len+1 > 0) {
		if (s[len] == c) {
			return (char*)(&s[len]);
		}
		len--;
	}
	return (void*)0;
}
