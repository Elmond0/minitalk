NAMEC = client

NAMES = server

SRCC_FILES = client.c

SRCS_FILES = server.c

SRC_DIR = src

SRCC = $(SRC_DIR)/$(SRCC_FILES)

SRCS = $(SRC_DIR)/$(SRCS_FILES)

OBJC = ${SRCC:.c=.o}

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

all:	$(NAMEC) $(NAMES)


$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAMEC): $(OBJC) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJC) -o $(NAMEC) -Llibft -lft
	@echo -e "\033[32m $(NAMEC) Created successfully\033[0m"

$(NAMES): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAMES) -Llibft -lft
	@echo -e "\033[32m $(NAMES) Created successfully\033[0m"

clean :
		${RM} ${OBJC}
		${RM} ${OBJS}
		${RM} ${OBJBC}
		${RM} ${OBJBS}
		make clean -C libft
	@echo "\033[32mObject files removed successfully\033[0m"

fclean : clean
		${RM} $(NAMEC)
		${RM} $(NAMES)
		make fclean -C libft
	@echo "\033[32m$(NAMEC) & $(NAMES) removed successfully\033[0m"


re : fclean all

.PHONY:		all bonus clean fclean re