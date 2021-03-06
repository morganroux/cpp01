/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:30:42 by mroux             #+#    #+#             */
/*   Updated: 2021/06/05 16:23:57 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie():
	_name("noname"), _type("notype")
{
}

Zombie::Zombie(std::string name, std::string type) :
	_name(name), _type(type)
{
}

void	Zombie::annouce()
{
	std::cout << _name << " (" << _type << ") " << "Braiiiiiiinnnssss ..." << std::endl;
}
