/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 22:31:09 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/05 14:43:19 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main()
{
	std::cout << "==========Constructor==========" << std::endl;
	std::cout << "----- Frag constructor -----" << std::endl;
	FragTrap Frag("Frag");
	FragTrap Copy_Frag(Frag);
	std::cout << "----- Scav constructor -----" << std::endl;
	ScavTrap Scav("Scav");
	ScavTrap Copy_Scav(Scav);
	std::cout << "----- Clap constructor -----" << std::endl;
	ClapTrap Clap("Clap");
	ClapTrap Copy_Clap(Clap);
	std::cout << "----- Ninja constructor -----" << std::endl;
	NinjaTrap Ninja("Ninja");
	NinjaTrap Copy_Ninja(Ninja);
	std::cout << "----- Super constructor -----" << std::endl;
	SuperTrap Super("Super");
	SuperTrap Copy_Super(Super);

	std::cout << "==========Frag act===========" << std::endl;
	Frag.rangedAttack("enemy");
	Frag.meleeAttack("enemy");
	Frag.takeDamage(30);
	Frag.beRepaired(50);
	Frag.vaulthunter_dot_exe("enemy");
	std::cout << "==========Scav act===========" << std::endl;
	Scav.rangedAttack("enemy");
	Scav.meleeAttack("enemy");
	Scav.takeDamage(30);
	Scav.beRepaired(50);
	Scav.challengeNewcomer();
	std::cout << "==========Clap act===========" << std::endl;
	Clap.rangedAttack("enemy");
	Clap.meleeAttack("enemy");
	Clap.takeDamage(30);
	Clap.beRepaired(50);
	std::cout << "==========Ninja act==========" << std::endl;
	Ninja.rangedAttack("enemy");
	Ninja.meleeAttack("enemy");
	Ninja.takeDamage(30);
	Ninja.beRepaired(50);
	Ninja.ninjaShoebox(Clap);
	Ninja.ninjaShoebox(Ninja);
	Ninja.ninjaShoebox(Frag);
	Ninja.ninjaShoebox(Scav);
	std::cout << "===========Super act=========" << std::endl;
	Super.rangedAttack("enemy");
	Super.meleeAttack("enemy");
	std::cout << "==========Destructor===========" << std::endl;
	return (0);
}
