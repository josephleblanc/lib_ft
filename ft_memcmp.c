#include "libft.h"

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n) {
	const unsigned char *us1;
	const unsigned char *us2;

	us1 = (const unsigned char*)s1;
	us2 = (const unsigned char*)s2;
	while (*us1 == *us2 && --n > 0) {
		us1++;
		us2++;
	}
	if (*us1 < *us2)
		return -1;
	if (*us1 > *us2)
		return 1;
	return 0;
			
}
