/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 21:18:13 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/05 13:59:08 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	std::cout << "Ninja Constructor created" << std::endl;
	this->Hit_points = 60;
	this->Max_hit_point = 60;
	this->Energy_points = 120;
	this->Max_energy_points = 120;
	this->Level = 1;
	this->Name = "NinjaTrap";
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 5;
	this->Armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap(const std::string &_name) : ClapTrap(_name)
{
	std::cout << "Ninja Constructor created" << std::endl;
	this->Hit_points = 60;
	this->Max_hit_point = 60;
	this->Energy_points = 120;
	this->Max_energy_points = 120;
	this->Level = 1;
	this->Name = _name;
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 5;
	this->Armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap &NinjaTrap)
{
	std::cout << "NinjaTrap 암살 준비중.." << std::endl;
	*this = NinjaTrap;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "인생무상..." << std::endl;
}

NinjaTrap&	NinjaTrap::operator = (const NinjaTrap &NinjaTrap)
{
	if (this == &NinjaTrap)
		return (*this);
	this->Hit_points = NinjaTrap.Hit_points;
	this->Max_hit_point = NinjaTrap.Max_energy_points;
	this->Energy_points = NinjaTrap.Energy_points;
	this->Max_energy_points = NinjaTrap.Max_energy_points;
	this->Level = NinjaTrap.Level;
	this->Name = NinjaTrap.Name;
	this->Melee_attack_damage = NinjaTrap.Melee_attack_damage;
	this->Ranged_attack_damage = NinjaTrap.Ranged_attack_damage;
	this->Armor_damage_reduction = NinjaTrap.Armor_damage_reduction;
	std::cout << "NinjaTrap 암살할 준비 끝.." << std::endl;
	return (*this);
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "why so serious" << std::endl;
	ClapTrap::rangedAttack(target);
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "Die die die!!!" << std::endl;
	ClapTrap::meleeAttack(target);
}

void	NinjaTrap::ninjaShoebox(const ClapTrap &ClapTrap)
{
	std::cout << this->Name << "이(가) " << "ClapTrap" << "(" << ClapTrap.get_Name() << ")을 공격했다." << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &FragTrap)
{
	std::cout << this->Name << "이(가) " << "FragTrap" << "(" << FragTrap.get_Name() << ")으로 변신.." << std::endl;
	FragTrap.vaulthunter_dot_exe("Enemy");
}

void	NinjaTrap::ninjaShoebox(ScavTrap &ScavTrap)
{
	std::cout << this->Name << "이(가) " << "ScavTrap" << "(" << ScavTrap.get_Name() << ")으로 변신.." << std::endl;
	ScavTrap.challengeNewcomer();
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap &NinjaTrap)
{
	std::cout << this->Name << "이(가) " << "NinjaTrap" << "(" << NinjaTrap.get_Name() << ")으로 변신.." << std::endl;
	std::cout << "아니 뭐야 나잖아!" << std::endl;
	
}