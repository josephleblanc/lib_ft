NAME = lift.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -c

SRC = ft_memalloc.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(SRC)

clean: 
	rm -f $(OBJ) 

fclean:
	rm -f $(NAME)

re: fclean all
