
# ###############################################################################
#									Makefile  objs								#
# ###############################################################################

NAME = minishell
SRC = src/main.c utils/error.c utils/ft_split.c utils/builtins.c utils/string.c utils/utils.c builtins/echo.c
CFLAGS = -Wall -Wextra -Werror
#-fsanitize=address -g3
OBJS = $(SRC:.c=.o)
CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f
${NAME}:	${OBJS}
			make -C libft
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME)  ${CLR_RMV}..."
			${CC} ${CFLAGS} libft/libft.a -o ${NAME} ${OBJS}
			@echo "$(YELLOW)$(NAME) created[0m ✔️"

all:		${NAME}

clean:
			@ ${RM} *.o */*.o */*/*.o
			make -C libft
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			make fclean -C libft
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re

