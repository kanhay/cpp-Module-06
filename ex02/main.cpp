/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:44:26 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/02 15:25:50 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(){
    Base *bptr = generate();
    if (bptr)
    { 
        Base &bref = *bptr;
        identify(bptr);
        identify(bref);
    }
    else
        std::cerr << "ERROR\n";
}