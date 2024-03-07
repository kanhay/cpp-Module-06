# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 11:34:02 by khanhayf          #+#    #+#              #
#    Updated: 2024/02/26 16:50:44 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identifier
CC = c++
FLAGSCPP = -Wall -Wextra -Werror -std=c++98
HEAD = Base.hpp
SRC = main.cpp Base.cpp
OBJ = main.o Base.o
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGSCPP) $(OBJ) -o $@
	
%.o : %.cpp $(HEAD)
	$(CC) $(FLAGSCPP) -c $<

clean :
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)
	
re : fclean all