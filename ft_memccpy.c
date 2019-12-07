#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n) {
	char *dest_ptr;
	const char *src_ptr;

	dest_ptr = dest;
	src_ptr = src;

	while (n-- > 0) {
		*dest_ptr++ = *src_ptr;
		if (*src_ptr++ == (char)c) 
			return dest_ptr;
	}
	return (void*)0;
}
