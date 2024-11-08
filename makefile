CC = gcc

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

NAME = libft.a

SRC = ft_atoi.c ft_strlen.c ft_strlcat.c \
      ft_strlcpy.c ft_strrchr.c ft_strchr.c \
      ft_calloc.c ft_bzero.c ft_memset.c ft_memmove.c \
      ft_memcpy.c ft_strdup.c ft_strnstr.c \
      ft_tolower.c ft_toupper.c ft_strncmp.c ft_isascii.c \
      ft_isalnum.c ft_isalpha.c ft_isdigit.c \
	  ft_memcmp.c ft_memchr.c ft_isprint.c ft_strtrim.c ft_substr.c ft_strjoin.c \
	  ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
	  ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
		ft_lstiter.c ft_lstmap.c

OBJB = $(BONUS:.c=.o)

AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) -c $(FLAGS) $< -o $@

bonus: $(OBJB) $(OBJ)
	$(AR) $(NAME) $(OBJB) $(OBJ)

clean:
	rm -rf $(OBJ) $(OBJB)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
