/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 22:31:09 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/04 22:50:57 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main()
{
	std::cout << "==========Constructor==========" << std::endl;
	FragTrap Frag("Frag");
	FragTrap Copy_Frag(Frag);
	ScavTrap Scav("Scav");
	ScavTrap Copy_Scav(Scav);
	ClapTrap Clap("Clap");
	ClapTrap Copy_Clap(Clap);
	NinjaTrap Ninja("Ninja");
	NinjaTrap Copy_Ninja(Ninja);

	std::cout << "==========Frag act===========" << std::endl;
	Frag.rangeAttack("enemy");
	Frag.meleeAttack("enemy");
	Frag.takeDamage(30);
	Frag.beRepaired(50);
	Frag.vaulthunter_dot_exe("enemy");
	std::cout << "==========Scav act===========" << std::endl;
	Scav.rangeAttack("enemy");
	Scav.meleeAttack("enemy");
	Scav.takeDamage(30);
	Scav.beRepaired(50);
	Scav.challengeNewcomer();
	std::cout << "==========Clap act===========" << std::endl;
	Clap.rangeAttack("enemy");
	Clap.meleeAttack("enemy");
	Clap.takeDamage(30);
	Clap.beRepaired(50);
	std::cout << "==========Ninja act==========" << std::endl;
	Ninja.rangeAttack("enemy");
	Ninja.meleeAttack("enemy");
	Ninja.takeDamage(30);
	Ninja.beRepaired(50);
	Ninja.ninjaShoebox(Clap);
	Ninja.ninjaShoebox(Ninja);
	Ninja.ninjaShoebox(Frag);
	Ninja.ninjaShoebox(Scav);
	std::cout << "==========Destructor===========" << std::endl;
	return (0);
}
