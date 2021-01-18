#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_numbers() {
    char a = '0';

    while (a <= '9') {
        ft_putchar(a);
        a++;
    }
}


void ks_revalpf() {
    char a = 10;

    while (a) {
        ft_putchar(a);
        a--;
    }
}

void ft_is_negative(int n) {
    if (n < 0) {
        ft_putchar('N');
    } else {
        ft_putchar('P');
    }

}

void ft_example2() {
    int i = 0;
    int j = 1;

    while (i <= 9) {
        while (j <= 9) {
            ft_putchar('0' + i);
            ft_putchar('0' + j);
            ft_putchar('\n');
            j++;
        }
        j = 0;
        i++;
    }
}

void ft_example() {
    int i = 0;
    int j = 0;
    while (i <= 9) {
        ft_putchar('0' + i);
        ft_putchar('\n');
        i++;
    }
    i = 1;
    while (i >= 1 && i <= 9) {
        while (j <= 9) {
            ft_putchar('0' + i);
            ft_putchar('0' + j);
            ft_putchar('\n');
            j++;
        }
        j = 0;
        i++;
    }

}

void ft_print_comb() {
    int a = 0;
    int b = 1;
    int c = 2;
    int offset_c = 0;
    int offset_b = 0;

    while (a <= 7) {
        offset_b++;
        while (b <= 8) {
            offset_c++;
            while (c <= 9) {
                if (a != b && b!= c && a != c) {
                    ft_putchar('0'+ a);
                    ft_putchar('0'+ b);
                    ft_putchar('0'+ c);
                    ft_putchar('\n');
                }
                c++;
            }
            c = 2 + offset_c;
            b++;
        }
        offset_c = 0;
        b = 1 + offset_b;
        a++;
    }
}

void	ft_print_comb2(void)
{
    char	nbr1;
    char	nbr2;
    char	nbr3;

    nbr1 = '0' - 1;
    while (++nbr1 <= '9')
    {
        nbr2 = nbr1;
        while (++nbr2 <= '9')
        {
            nbr3 = nbr2;
            while (++nbr3 <= '9')
            {
                if (nbr1 != '0' || nbr2 != '1' || nbr3 != '2')
                    ft_putchar(',');
                if (nbr1 != '0' || nbr2 != '1' || nbr3 != '2')
                    ft_putchar(' ');
                ft_putchar(nbr1);
                ft_putchar(nbr2);
                ft_putchar(nbr3);
            }
        }
    }
    ft_putchar('\n');
}


int main() {
    ft_print_comb();
    return 0;
}
