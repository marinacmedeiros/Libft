
SRCS	= 

OBJS	= ${SRCS:.c=.o}

NAME	= 

CC	= cc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o $< -o ${<:.c=.o}
		
${NAME}:	${OBJS}
	${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re

