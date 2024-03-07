/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:33:43 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/02 15:24:19 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}

Base * generate(void){
    std::srand(time(0));
    int rIdx = std::rand() % 3;
    if (rIdx == 0)
        return (new A);
    else if (rIdx == 1)
        return (new B);
    else if (rIdx == 2)
        return (new C);
    else
        return (NULL);
}

void identify(Base* p){
    if (dynamic_cast<A *>(p))
        std::cout << "The object pointed to by p is of type A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "The object pointed to by p is of type B\n";
    else if (dynamic_cast<C *>(p))
        std::cout << "The object pointed to by p is of type C\n";
    else
        std::cout << "The object pointed to by p is neither of them\n";
}

void identify(Base& ref){
    try{
        (void)dynamic_cast<A &>(ref);
        std::cout << "The object refered to by ref is of type A\n";
        return ;
    }
    catch(const std::exception& e){
    }
    try{
        (void)dynamic_cast<B &>(ref);
        std::cout << "The object refered to by ref is of type B\n";
        return ;
    }
    catch(const std::exception& e){
    }
    try{
        (void)dynamic_cast<C &>(ref);
        std::cout << "The object refered to by ref is of type C\n";
    }
    catch(const std::exception& e){
        std::cout << "The object pointed to by p is neither of them\n";
    }
}
