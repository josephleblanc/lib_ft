// Allocates (with malloc(3)) and returns a "fresh" memory
// area. The memory allocated is initialized to 0. If the
// allocation fails, the function returns NULL.

#include <stdio.h>
#include <stdlib.h>

void *ft_memalloc(size_t size) {
	void * fresh_memory;
	size_t counter;

	counter = 0;
	fresh_memory = (void *)malloc(size * sizeof(char));
	if (fresh_memory) {
		while (counter < size) {
			*((char *)fresh_memory + counter) = 0;
			counter++;
		}
		return (fresh_memory);
	} else {
		return (NULL);
	}
}
