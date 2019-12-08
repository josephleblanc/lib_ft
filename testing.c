#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main() {
	char str1[10] = {'a', 'b', 'c', 'd', 'e', '\0'};
	char str2[10] = {'f', 'g', 'h', 'i', 'j', 'k', '\0'};

	char str_no_term[5] = {'z', 'y'};

	char *find_it;
	char *dont_find_it;
	char *no_term;

	char *ft_find_it;
	char *ft_dont_find_it;
	char *ft_no_term;

	char *index;
	index = str2;
	while (*index) {
			find_it = strrchr(str2, *index);
			ft_find_it = ft_strrchr(str2, *index);
			printf("find_it: %c\n", *index);
			printf("strrchr: %s, ft_strrchr: %s\n", find_it, ft_find_it);
			index++;
	}

	dont_find_it = strrchr(str1, 'f');
	ft_dont_find_it = ft_strrchr(str1, 'f');
	printf("dont_find_it\n");
	printf("strrchr: %s, ft_strrchr: %s\n", dont_find_it, ft_dont_find_it);

	char *find_term;
	char *ft_find_term;
	find_term = strrchr(str1, '\0');
	ft_find_term = ft_strrchr(str1, '\0');
	printf("find_term\n");
	printf("strrchr: %s, ft_strrchr: %s\n", find_term, ft_find_term);
}
