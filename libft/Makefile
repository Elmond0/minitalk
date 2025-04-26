NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_atoi.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strtrim.c ft_bzero.c \
	ft_putnbr_fd.c ft_strlcat.c ft_substr.c ft_calloc.c ft_memchr.c ft_strlcpy.c \
	ft_tolower.c ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlen.c ft_toupper.c \
	ft_isalpha.c ft_memcpy.c ft_split.c ft_strmapi.c ft_isascii.c ft_memmove.c \
	ft_strchr.c ft_strncmp.c ft_isdigit.c ft_memset.c ft_strdup.c ft_strnstr.c \
	ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strrchr.c ft_free.c create_list.c \
	print_list.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_printf.c \
	ft_putchar.c ft_putnbr.c ft_putnbr_hex.c ft_putnbr_unsigned.c ft_putptr.c ft_putstr.c \
	get_next_line.c read_line.c ft_get_strjoin.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : 	$(OBJS)
		ar rc $@ $?
		@echo "\033[32m$(NAME) created successfully\033[0m"

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		$(RM) $(OBJS)
		@echo "\033[32mObject files removed successfully\033[0m"

fclean: 	clean
		$(RM) $(NAME)
		@echo "\033[32m$(NAME) removed successfully\033[0m"

re: fclean all

.PHONY: all clean fclean re
