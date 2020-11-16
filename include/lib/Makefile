##
## EPITECH PROJECT, 2018
## LIB
## File description:
## Makefile for personal lib C
##

EXT		=	.c

NAME	=	lib.a

SRCDIR	=	sources/

INCDIR	=	include/

SRC	=	$(SRCDIR)my_strlen			\
		$(SRCDIR)my_putchar			\
		$(SRCDIR)my_putstr			\
		$(SRCDIR)my_strcat			\
		$(SRCDIR)my_strcmp			\
		$(SRCDIR)my_strncmp			\
		$(SRCDIR)my_strdup			\
		$(SRCDIR)my_str_to_wordtab	\
		$(SRCDIR)my_tablen			\
		$(SRCDIR)is_num				\
		$(SRCDIR)is_a_sep			\
		$(SRCDIR)my_getnbr			\
		$(SRCDIR)my_strcpy			\
		$(SRCDIR)get_next_line.c

NOM		=	$(basename $(notdir $(SRC)))

OBJ		=	$(addprefix objects/, $(addsuffix .o, $(NOM)))

CFLAGS =	-g3 -Iinclude $(WARN) -Wall -Wextra -pedantic

RED		=\033[0m\e[1m\e[31m
GREEN	=\033[0m\e[1m\e[32m
NC		=\033[0m
GREY	=\033[40m
BG_CL	=\033[42m

all:		$(NAME)

$(NAME):	$(OBJ) | objects/
	@ar rc ${NAME} $(OBJ)
	@echo  -e '${BG_CL}| Flags  : $(CFLAGS)${NC}'
	@echo  -e '${GREEN}╰ Create${NC} : ${GREY}lib/$(NAME)${NC}'

objects/%.o:	sources/%.c | objects
	@mkdir -p objects
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo -e "${GREEN}|  [OK]${GREEN}   " $< "${NC}" || echo -e "\e[91;5m|  [KO]\e[25m   " $< "${NC}"

objects:
	@mkdir -p $@
	@echo  -e '${GREEN}╭ Object${NC} : lib/objects/ dir create'

clean:
	@rm    -f $(OBJ)
	@echo  -e '${RED}╭ Clean ${NC} : lib/ OK'

fclean:
	@$(RM) -r objects
	@$(RM) $(NAME)
	@echo  -e '${RED}| Fclean${NC} : lib/$(NAME) removed'
	@echo  -e '${RED}| Fclean${NC} : lib/objects/ dir removed'

re:		fclean all

.PHONY:		all clean fclean re