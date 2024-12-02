# Variables
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = src/ft_printf.c src/print_format.c src/ft_printnbr.c \
       src/ft_printstr.c src/ft_printchr.c src/ft_printhex.c \
       src/ft_printpercent.c src/ft_printptr.c src/ft_printunsigned.c
OBJS = $(SRCS:.c=.o)
LIBFT = libft/libft.a

# Règles
all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C libft
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) -C libft clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)

re: fclean all

# Dépendances
%.o: %.c
	$(CC) $(CFLAGS) -I includes -c $< -o $@

.PHONY: all clean fclean re
