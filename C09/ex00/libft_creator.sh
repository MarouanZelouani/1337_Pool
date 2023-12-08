#!bin/sh
cc -Wall -Werror -Wextra -c ft_putchar.c -o ft_putchar.o
cc -Wall -Werror -Wextra -c ft_swap.c -o ft_swap.o
cc -Wall -Werror -Wextra -c ft_putstr.c -o ft_putstr.o
cc -Wall -Werror -Wextra -c ft_strlen.c -o ft_strlen.o
cc -Wall -Werror -Wextra -c ft_strcmp.c  -o ft_strcmp.o
ar rc libft.a *.o
