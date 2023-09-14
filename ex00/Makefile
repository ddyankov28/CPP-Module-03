# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 12:16:24 by ddyankov          #+#    #+#              #
#    Updated: 2023/09/14 13:22:51 by ddyankov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED_BACK = \033[0;101m
GREEN_BACK = \033[0;102m
COLOUR_END = \033[0m

NAME = a.out

SRC = main.cpp ClapTrap.cpp

OBJ = $(patsubst %.cpp, obj/%.o, $(SRC))

DEPS = $(patsubst %.cpp, obj/%.d, $(SRC))

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP -g 
# -MMD generates the dependency information
# -MP adds empty rules for header files to prevent errors if a header is deleted.

obj/%.o: %.cpp
		@mkdir -p obj
		@c++ $(CPPFLAGS) -c $< -o $@

all:$(NAME)

$(NAME): $(OBJ)
		@c++ $(CPPFLAGS) $(OBJ) -o $(NAME)
		@echo "$(GREEN_BACK)✅✅✅Executable $(NAME) is ready✅✅✅$(COLOUR_END)"

clean:
		@rm -rf obj
		@echo "$(RED_BACK)🧹🧹🧹obj folder was cleaned🧹🧹🧹$(COLOUR_END)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(RED_BACK)🧹🧹🧹Executable was cleaned🧹🧹🧹$(COLOUR_END)"

-include $(DEP) #include dependency files generated during the build process 
re: fclean all