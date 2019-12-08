#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n) {
	size_t counter;

	counter = 0;
	while (counter+1 < n && s1[counter] == s2[counter] && s1[counter] && s2[counter]) {
		counter++;
	}
	if (s1[counter] == s2[counter]) {
		return 0;
	}
	return (int)(s1[counter] - s2[counter]);
}
