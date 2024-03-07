/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:05:41 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/02 15:42:33 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}

ScalarConverter::ScalarConverter(const ScalarConverter& ob){
    *this = ob;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&){
    return (*this);
}

ScalarConverter::~ScalarConverter(){
}

dataTypes Checker(std::string input){
    for (size_t i = 0; i < input.length(); i++)
        input.at(i) = tolower(input.at(i));
    if (input == "inf" || input == "+inf" || input == "-inf"
    || input == "inff" || input == "+inff" || input == "-inff"
    || input == "nan" || input == "nanf")
        return _INF;

    if (input.length() == 1 && !isdigit(input.at(0)))
        return _CHAR;

    if(input.at(0) == '+' || input.at(0) == '-' || isdigit(input.at(0))){
        unsigned int i = 0;
        if (input.at(0) == '+' || input.at(0) == '-')
            i++;
        while (i < input.length() && isdigit(input.at(i)))
                i++;
        if (i == input.length())
        return (_INT);
    }

    char *end;
    strtod(input.c_str(), &end);
    if (end[0] == 'f' && end[1] == '\0')
        return _FLOAT;
    if (end[0] == '\0')
        return _DOUBLE;
    return _NO1;
}

void ScalarConverter::convert(const std::string& str){
    dataTypes t = Checker(str);
    char *end;
    double d = strtod(str.c_str(), &end);

    if (t == _CHAR){
        if (!std::isprint(end[0]))
                std::cout << "Char: " << "Non displayable\n";
        else
                std::cout << "Char: '" << str << "'" << std::endl;
        std::cout << "Int: " << static_cast<int>(end[0]) << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "Float: " << static_cast<float>(end[0]) << "f" << std::endl;
        std::cout << "Double: " << static_cast<double>(end[0]) << std::endl;
    }
    else if(t == _INF){
        std::cout << "Char: " << "Impossible convertion\n";
        std::cout << "Int: " << "Impossible convertion\n";
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "Float: " << static_cast<float>(d) << "f" << std::endl;
        std::cout << "Double: " << d << std::endl;
    }
    else{
        char c = static_cast<char>(d);
        if (!std::isprint(c))
            std::cout << "Char: " << "Non displayable\n";
        else
            std::cout << "Char: '" << c << "'" << std::endl;
        if (d <= INT_MAX && d >= INT_MIN)
            std::cout << "Int: " << static_cast<int>(d) << std::endl;
        else
            std::cout << "Int: " << "Impossible convertion\n";
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "Float: " << static_cast<float>(d) << "f" << std::endl;
        std::cout << "Double: " << d << std::endl;
    }
}
