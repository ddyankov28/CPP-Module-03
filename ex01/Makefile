# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 12:16:24 by ddyankov          #+#    #+#              #
#    Updated: 2023/09/12 10:48:29 by ddyankov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

DEP = $(SRC:.cpp=.d)

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP -g 
# -MMD generates the dependency information
# -MP adds empty rules for header files to prevent errors if a header is deleted.

%.o: %.cpp
		$(CXX) $(CPPFLAGS) -c $< -o $@ 

all:$(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ) $(DEP)

fclean: clean
		rm -f $(NAME)

-include $(DEP) #include dependency files generated during the build process 
re: fclean all