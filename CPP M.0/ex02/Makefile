# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 10:27:13 by bel-kdio          #+#    #+#              #
#    Updated: 2023/09/21 15:26:14 by bel-kdio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

SRC = Account.cpp tests.cpp

NAME = THE_BANK

OBJ = $(SRC:.cpp=.o)

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) $< -c -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re