# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror
MFLAGS = -lXext -lX11 -lm -lbsd

# Directories

LIBFTDIR = ./ft_libft
FT_PRINTFDIR = ./ft_printf

# Source files
SRCS = main.c checkmatrix.c
OBJS = $(SRCS:%.c=%.o)

# Executable name
NAME = pushswap

all: $(NAME)

%.o: %.c | $(OBJS)
	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	make -C $(LIBFTDIR)
	make -C $(FT_PRINTFDIR)
	$(CC) $(OBJS) -L$(LIBFTDIR) -L$(FT_PRINTFDIR) -lftprintf -lft -o $(NAME)



clean:
	rm -rf $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# #*
# SRC = checkPath.c fdToStr.c main.c error.c mapControl.c saveObjPosition.c stampMatrix.c libft/libft.a
# SRCB = checkPath.c fdToStr.c main.c error.c mapControl.c saveObjPosition.c stampMatrix.c
# OBJ = $(SRCB:%.c=%.o)

# MLXDIR = minilibx-linux/mlx


# CFLAGS = -Wall -Wextra -Werror 
# LIBSFLAG = -L$(LIBFTDIR) -lft -L$(FT_PRINTFDIR) -lftprintf -L$(MLXDIR) -lmlx_Linux
# cc = gcc

# OUTPUTNAME = so_long
# RM = rm -r


# all: $(OBJ)
# 	@$(CC) $(CFLAGS) $(OBJ) -o $(OUTPUTNAME)

# fclean: clean
# 	$(RM) $(OBJ)

# re: 
# 	@$(MAKE) all
# 	@rm *.o 
# 	@echo "Ho eseguito e cancellato tutto"

# .PHONY: all clean fclean re