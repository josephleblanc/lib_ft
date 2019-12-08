int	ft_tolower(int c) {
	if (64 < c && c < 91) {
		c += 32;
	}
	return c;
}
