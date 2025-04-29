NAMEC = client

NAMES = server

BONUS_NAMEC = client_bonus

BONUS_NAMES = server_bonus

SRCC_FILES = client.c

SRCS_FILES = server.c

BONUSC_FILES = client_bonus.c

BONUSS_FILES = server_bonus.c

SRC_DIR = src

SRCC = $(SRC_DIR)/$(SRCC_FILES)

SRCS = $(SRC_DIR)/$(SRCS_FILES)

BONUSC = $(SRC_DIR)/$(BONUSC_FILES)

BONUSS = $(SRC_DIR)/$(BONUSS_FILES)

OBJC = ${SRCC:.c=.o}

OBJS = ${SRCS:.c=.o}

OBJBC = ${BONUSC:.c=.o}

OBJBS = ${BONUSS:.c=.o}

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

bonus : $(BONUS_NAMEC) $(BONUS_NAMES)

$(BONUS_NAMEC): $(OBJBC) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJBC) -o $(BONUS_NAMEC) -Llibft -lft
	@echo -e "\033[32m $(BONUS_NAMEC) Created successfully\033[0m"

$(BONUS_NAMES): $(OBJBS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJBS) -o $(BONUS_NAMES) -Llibft -lft
	@echo -e "\033[32m $(BONUS_NAMES) Created successfully\033[0m"

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
		${RM} $(BONUS_NAMEC)
		${RM} $(BONUS_NAMES)
		make fclean -C libft
	@echo "\033[32m$(BONUS_NAMEC) & $(BONUS_NAMES) removed successfully\033[0m"


re : fclean all

.PHONY:		all bonus clean fclean re