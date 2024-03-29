NAME = libftprintf.a

SRCS = ft_printf.c \
       ft_putcharlen.c \
	    ft_putstrlen.c \
		ft_putnbrlen.c \
		ft_puthex.c \
		ft_putunsigned.c \

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all, clean, fclean, re