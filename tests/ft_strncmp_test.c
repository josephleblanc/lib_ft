#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main() {
	const char s1[10] = "abcdefg\0";
	const char s2[10] = "abcdezy\0";
	const char *null_ptr;
	size_t n;

	null_ptr = (void*)0;

	n = 5;
	printf("n = %zu, strncmp: %d, ft_strncmp: %d\n", n, strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
	n = 0;
	printf("n = %zu, strncmp: %d, ft_strncmp: %d\n", n, strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
	n = 100;
	printf("n = %zu, strncmp: %d, ft_strncmp: %d\n", n, strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
//	printf("s1 null string -- strncmp: %d, ft_strncmp: _\n", \
//					strncmp(null_ptr, s2, n) /* , ft_strncmp(null_ptr, s2, n) */ );
//	printf("s2 null pointer -- strncmp: %d, ft_strncmp: _\n", \
//					strncmp(s1, null_ptr, n) /* , ft_strncmp(s1, null_ptr, n) */ );

	char ls1[999];
	char ls2[999];
	size_t liln;
	int score = 1000;
	liln = 1;

	printf("Start\n");
	ls1[0] = 1;
	ls2[0] = 1;
	while (liln < 1000) {
		ls1[liln] = liln;
		ls2[liln] = liln;
		liln++;
	}
	ls1[999] = '\0';
	ls1[999] = '\0';

	while (liln > 0) {
		if (strncmp(ls1, ls2, liln) != ft_strncmp(ls1, ls2, liln)) {
			printf("liln = %ld, ls1[%ld] = %d, ls2[%ld] = %d, strncmp: %d, ft_strncmp: %d\n", \
					liln, liln, ls1[liln], liln, ls2[liln],\
				   	strncmp(ls1, ls2, liln), ft_strncmp(ls1, ls2, liln));
			score--;
		}
		liln--;
	}
	printf("score = %i / 1000\n", score);
}
