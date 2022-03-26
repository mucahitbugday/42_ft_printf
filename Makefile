SRC =		src/ft_printf.c \
			src/ft_formats.c \
			src/ft_print_char.c \
			src/ft_print_str.c \
			src/ft_print_ptr.c \
			src/ft_print_nbr.c \
			src/ft_print_unsigned.c \
			src/ft_print_hex.c \
			src/ft_print_percent.c \
			src/ft_printf_utils.c

SRC_OBJ = $(SRC:.c=.o)

NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
RM = rm -rf
CC = gcc
MAKELIB = ar rcs

## COLOR ##
GREEN = \033[0;92m
DEF_COLOR = \033[0;39m

all: ${NAME}
	
${NAME}: ${SRC_OBJ}
	${MAKELIB} ${NAME} ${SRC_OBJ}
	@echo "$(GREEN)<<< MAKE FINISH >>>$(DEF_COLOR)"

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${SRC_OBJ}
	@echo "$(GREEN)<<< CLEAN FINISH >>>$(DEF_COLOR)"



fclean: clean
	${RM} ${NAME}
	@echo "$(GREEN)<<< FCLEAN FINISH >>>$(DEF_COLOR)"
	


re: fclean all

.PHONY: all clean fclean re