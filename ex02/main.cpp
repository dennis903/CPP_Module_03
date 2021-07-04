/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 22:31:09 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/04 20:44:27 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	std::cout << "==========Constructor==========" << std::endl;
	FragTrap Frag("Frag");
	FragTrap Copy_Frag(Frag);
	ScavTrap Scav("Scav");
	ScavTrap Copy_Scav(Scav);

	std::cout << "==========Frag act===========" << std::endl;
	Frag.rangeAttack("enemy");
	Frag.meleeAttack("enemy");
	Frag.takeDamage(30);
	Frag.beRepaired(50);
	std::cout << "==========Scav act===========" << std::endl;
	Scav.rangeAttack("enemy");
	Scav.meleeAttack("enemy");
	Scav.takeDamage(30);
	Scav.beRepaired(50);
	std::cout << "==========Destructor===========" << std::endl;
	return (0);
}