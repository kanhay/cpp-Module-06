/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:22:07 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/29 13:54:49 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer& ob){
    *this = ob;
}

Serializer& Serializer::operator=(const Serializer& ob){
    (void)ob;
    return(*this);
}

Serializer::~Serializer(){}

uintptr_t Serializer::serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw){
    return (reinterpret_cast<Data *>(raw));
}
