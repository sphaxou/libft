# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgallois <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 12:26:51 by vgallois          #+#    #+#              #
#    Updated: 2020/02/27 13:20:25 by vgallois         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
BONUS	= .bonus

SRC	= ft_memset.c\
	  ft_bzero.c\
	  ft_memalloc.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_memmove.c\
	  ft_memdup.c\
	  ft_strlen.c\
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strnstr.c\
	  ft_strncmp.c\
	  ft_atoi.c\
	  ft_atof.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_isspace.c\
	  ft_isin.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_isupper.c\
	  ft_islower.c\
	  ft_calloc.c\
	  ft_strdup.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_split.c\
	  ft_itoa.c\
	  ft_itoa_base.c\
	  ft_strmapi.c\
	  ft_putendl.c\
	  ft_putchar.c\
	  ft_putchar_fd.c\
	  ft_putnstr.c\
	  ft_putstr.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_putnbrbase.c\
	  get_next_line.c\
	  get_next_line_utils.c\
	  
SRCBONUS = ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstsize_bonus.c\
  		ft_lstlast_bonus.c\
  		ft_lstdelone_bonus.c\
  		ft_lstclear_bonus.c\
  		ft_lstiter_bonus.c\
  		ft_lstmap_bonus.c\

OBJ	= $(addprefix $(OBJDIR),$(SRC:.c=.o))
OBJBONUS = $(addprefix $(OBJDIR),$(SRCBONUS:.c=.o))

INCLUDES = $(INCDIR)libft.h

INCDIR	= ./
SRCDIR	= ./
OBJDIR	= ./obj/

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

bonus:	$(BONUS)

$(BONUS):	obj $(OBJ) $(OBJBONUS)
	touch .bonus
	ar rc $(NAME) $(OBJ) $(OBJBONUS)
	ranlib $(NAME)

obj:	
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:	$(SRCDIR)%.c $(INCLUDES)
	$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ -c $<

$(NAME): obj $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJDIR)
	rm -rf $(BONUS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
