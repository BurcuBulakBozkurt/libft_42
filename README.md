# Libft
## About
This is the first project in School 42. This project is about coding a C library that contains a lot of general purpose functions to be used throughout the course.

Most of these funcions already exist on standard C libraries. However this project makes us to understand the way these functions work, to implement and to learn how to use them. In addition, 42 schools have strict norm and rules. For example in this project only external functions allowed are: write(), malloc() and free().

For detailed information, please check [the subject of this project][1].

### Makefile
- [Makefile](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/Makefile)

### Source Code

This project consists of coding basic C functions (see below), which are then compiled into a library for use in other projects of the cursus.

| No | Libc Functions                                                                    | No| Additional Functions                                                                    |No | Bonus Functions                                                                           |
|:--:|:-------------:                                                                    |:-:| :----------------:                                                                      |:-:| :-------:                                                                                 |
| 1  | [ft_atoi](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_atoi.c)      |1  | [ft_itoa](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_itoa.c)            | 1|[ft_lstadd_back](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_lstadd_back.c)  |
| 2  | [ft_bzero](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_bzero.c)    |2  | [ft_putchar_fd](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_putchar_fd.c)| 2|[ft_lstadd_front](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_lstadd_front.c)|
| 3  | [ft_calloc](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_calloc.c)  |3  | [ft_putendl_fd](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_putendl_fd.c)| 3|[ft_lstclear](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_lstclear.c)        |
| 4  | [ft_isalnum](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_isalnum.c)|4  | [ft_putnbr_fd](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_putnbr_fd.c)  | 4|[ft_lstdelone](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_lstdelone.c)      |
| 5  |[ft_isalpha](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_isalpha.c) |5  | [ft_putstr_fd](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_putstr_fd.c)  | 5|[ft_lstiter](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_lstiter.c)       |
| 6  | [ft_isascii](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_isascii.c)|6  | [ft_split](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_split.c)          | 6|[ft_lstlast](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_lstlast.c)       |
| 7  |[ft_isdigit](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_isdigit.c) |7  | [ft_strjoin](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_strjoin.c)      | 7|[ft_lstmap](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_lstmap.c)         |
| 8  |[ft_isprint](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_isprint.c) |8  | [ft_strmapi](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_strmapi.c)      | 8|[ft_lstnew](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_lstnew.c)         |
| 9  |[ft_memchr](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_memchr.c)   |9  | [ft_strtrim](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_strtrim.c)      | 9|[ft_lstsize](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_lstsize.c)       |    
|10 |[ft_memcmp](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_memcmp.c)    |10 | [ft_substr](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_substr.c)        |  |                                                                                         |
|11 |[ft_memcpy](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_memcpy.c)    |   |                                                                                         |  |                                                                                         |
|12 | [ft_memmove](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_memmove.c) |   |                                                                                         |  |                                                                                         |
|13 |[ft_memset](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_memset.c)    |   |                                                                                         |  |                                                                                         |
|14 |[ft_strchr](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_strchr.c)    |   |                                                                                         |  |                                                                                         |
|15 |[ft_strdup](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_strdup.c)    |   |                                                                                         |  |                                                                                         |
|16 |[ft_striteri](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_striteri.c)|   |                                                                                         |  |                                                                                         |
|17 |[ft_strlcat](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_strlcat.c)  |   |                                                                                         |  |                                                                                         |
|18 |[ft_strlcpy](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_strlcpy.c)  |   |                                                                                         |  |                                                                                         |
|19 |[ft_strlen](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_strlen.c)    |   |                                                                                         |  |                                                                                         |
|20 |[ft_strncmp](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_strncmp.c)  |   |                                                                                         |  |                                                                                         |
|21 |[ft_strnstr](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_strnstr.c)  |   |                                                                                         |  |                                                                                         |
|22 |[ft_strrchr](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_strrchr.c)  |   |                                                                                         |  |                                                                                         |
|23 |[ft_tolower](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_tolower.c)  |   |                                                                                         |  |                                                                                         |
|24 |[ft_toupper](https://github.com/BurcuBulakBozkurt/libft_42/blob/main/ft_toupper.c)  |   |                                                                                         |  |                                                                                         |

[1]: https://github.com/BurcuBulakBozkurt/libft_42/blob/main/Libft_subject.pdf
