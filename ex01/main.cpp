/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:22:30 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/02 15:16:29 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){

    Data d = {22 , 6, 'k'};
    Data *ptr = &d;

    uintptr_t uiptr = Serializer::serialize(ptr);
    Data *p = Serializer::deserialize(uiptr);
    if ((ptr == p) && p){
        std::cout << "ptr(" << ptr << ") and p(" << p << ")\n";
        std::cout << "ptr => i = " << ptr->i << " j = " << ptr->j << " c = " << ptr->c << "\n";
        std::cout << "p   => i = " << p->i << " j = " << p->j << " c = " << p->c << "\n";
    }
    else
        std::cout << ptr << " !!!!! " << p << "\n";
}
