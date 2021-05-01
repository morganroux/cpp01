/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:10:08 by mroux             #+#    #+#             */
/*   Updated: 2021/05/01 19:32:09 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <cstring>
# include <iostream>

class HumanB
{
	public:
		HumanB(std::string name);
		void		attack();
		void		setWeapon(Weapon& weapon) {
			_weapon = &weapon;
		};

	private:
		std::string	_name;
		Weapon*		_weapon;
};

#endif
