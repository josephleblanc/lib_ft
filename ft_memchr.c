#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n) {
	unsigned char uc;
	const unsigned char *us;
	unsigned char *ret_ptr;

	uc = (unsigned char)c;
	us = (const unsigned char*)s;

	while (n-- > 0) {
		if (*us == uc) {
			ret_ptr = (unsigned char*)us;
			return ret_ptr;
		}
		us++;
	}
	return (void*)0;
}
