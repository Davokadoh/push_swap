# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 15:19:47 by jleroux           #+#    #+#              #
#    Updated: 2022/06/13 14:26:29 by jleroux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS 			= -Wall -Wextra -Werror #-g -fsanitize=address -fno-omit-frame-pointer
TARGET 			= push_swap
SRCS_DIR 		= .
OBJS_DIR 		= .
LIBFT_DIR		= ./libft
INCLUDES_DIRS	= ./includes $(LIBFT_DIR)
INCLUDES		= $(addprefix -I,$(INCLUDES_DIRS))
LIBS			= $(LIBFT_DIR)/libft.a
_SRCS = push_swap.c \
		sort.c

OBJS = $(patsubst %.c, $(OBJS_DIR)/%.o, $(_SRCS))
SRCS = $(patsubst %, $(SRCS_DIR)/%, $(_SRCS))
.PHONY : all clean fclean re test norminette

all: $(TARGET)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(TARGET)

re: fclean all

$(OBJS_DIR):
	@mkdir -p $@

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	$(CC) -c $(CFLAGS) -o $@ $^ $(INCLUDES)

$(TARGET): $(LIBFT_DIR)/libft.a $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/libft.a $(TARGET)
	ar rcs $(TARGET) $(OBJS)

$(LIBFT_DIR)/libft.a:
	$(MAKE) -C $(LIBFT_DIR)

test: $(TARGET)
	$(MAKE) -C $(TESTS_DIR)

norminette:
	-norminette $(SRCS)
	-norminette $(LIBFT_DIR)
