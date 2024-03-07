/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:05:52 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/02 15:38:14 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <iomanip>
# include <limits>


enum dataTypes{_INT, _CHAR, _DOUBLE, _FLOAT, _INF, _NO1};

class ScalarConverter{
    private:
        ScalarConverter();
    public:
        ScalarConverter(const ScalarConverter& ob);
        ScalarConverter& operator=(const ScalarConverter& ob);
        ~ScalarConverter();

        static void convert(const std::string& str);
};

dataTypes Checker(std::string input);

#endif