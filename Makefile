##
## EPITECH PROJECT, 2018
## NEED4STEAK
## File description:
## Makefile of N4S
##

CC		=	gcc

EXT		=	.c

NAME	=	ai

SRCDIR	=	sources/

INCDIR	=	include/

SRC	=	${SRCDIR}main		\
		${SRCDIR}ia			\
		${SRCDIR}detect_end	\
		${SRCDIR}direction	\
		${SRCDIR}speed

NOM		=	$(basename $(notdir $(SRC)))

OBJ		=	$(addprefix objects/, $(addsuffix .o, $(NOM)))

LIB	=	${INCDIR}lib/

CFLAGS	= 	-I${INCDIR} -I$(LIB)${INCDIR} ${WARN} -Wall -Wextra -L$(LIB) -llib

RED		=\033[0m\e[1m\e[31m
GREEN	=\033[0m\e[1m\e[32m
NC		=\033[0m
GREY	=\033[40m
BG_CL	=\033[42m

NOPRINT = --no-print-directory -C

all:		$(NAME)

$(NAME):	$(OBJ) | objects/
	@$(CC) -o $(NAME) $(OBJ) ${LIB}lib.a
	@echo  -e '${BG_CL}| Flags  : $(CFLAGS)${NC}'
	@echo  -e '${GREEN}╰ Create${NC} : ${GREY}./$(NAME)${NC}'

lib:

objects/%.o:	sources/%.c | objects
	@mkdir -p objects
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo -e "${GREEN}|  [OK]${GREEN}   " $< "${NC}" || echo -e "\e[91;5m|  [KO]\e[25m   " $< "${NC}"

objects:
	@${MAKE} ${NOPRINT} ${LIB}
	@mkdir -p $@
	@echo  -e '${GREEN}╭ Object${NC} : objects/ dir create'

clean:
	@rm    -f $(OBJ)
	@${MAKE} clean ${NOPRINT} ${LIB}
	@echo  -e '${RED}| Clean${NC}  : OK'

fclean:		clean
	@${MAKE} fclean ${NOPRINT} ${LIB}
	@$(RM) -r objects
	@$(RM) $(NAME)
	@echo  -e '${RED}| Fclean${NC} : $(NAME) removed'
	@echo  -e '${RED}╰ Fclean${NC} : objects/ dir removed'

re:		fclean all

.PHONY:		all clean fclean re