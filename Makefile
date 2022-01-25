NAME =	libasm.a

SRC =	ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_write.s \
		ft_read.s \
		ft_strdup.s

OBJ =	${SRC:.s=.o}

CC =	gcc

CFLAGS =	-Wall -Wextra -Werror

TEST =	test

HEADER = libasm.h

%.o: %.s	$(HEADER)
	nasm -fmacho64 $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

test: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -o test

.PHONY: all clean fclean re test