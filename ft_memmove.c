#include "libft.h"

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n) {
	char *pt_dest;
	const char *pt_src;

	pt_dest = dest;
	pt_src = src;

	if (!src && !dest)
		return (void *)0;
	if (src > dest) {
		while (n-- > 0) 
			*pt_dest++ = *pt_src++;
	} else {
		while (n-- > 0) 
			pt_dest[n] = pt_src[n];
	}
	return dest;
}
