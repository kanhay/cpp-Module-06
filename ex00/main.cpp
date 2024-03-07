/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:58:29 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/02 15:44:44 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){

    if (ac != 2)
        return (std::cerr << "Invalid number of arguments\n", 1);

    if (av[1][0] == '\0' || Checker(av[1]) == _NO1)
        return (std::cerr << "Invalid input\n", 1);

    ScalarConverter::convert(av[1]);
}
