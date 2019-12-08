NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -c

SRC = 	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		\
		ft_memalloc.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(SRC)

clean: 
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all

so: $(OBJ)
	gcc -shared -o libft.so $(OBJ)
