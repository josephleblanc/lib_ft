#include "libft.h"

void *ft_memset(void *s, int c, size_t n) {
	size_t counter;

	counter = 0;
	while (counter < n) {
		*((char*)s + counter) = c;
		counter++;
	}

	return s;
}

int main() {
	return 0;
}
