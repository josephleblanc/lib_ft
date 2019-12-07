#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n) {
	char 		*strdest;
	const char 	*strsrc;

	if (dest || src) {
		strdest = dest;
		strsrc = src;
		while (n > 0) {
			*strdest++ = *strsrc++;
			n--;
		}
	}
	return (dest);
}
