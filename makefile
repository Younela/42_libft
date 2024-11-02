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
	  ft_memcmp.c ft_memchr.c

OBJ = $(SRC:.c=.o)

AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
#@echo "Creating archive: $(NAME)"

%.o: %.c $(HEADER)
	$(CC) -c $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
