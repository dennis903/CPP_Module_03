/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 23:38:06 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/05 14:00:39 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	this->Hit_points = FragTrap::get_Hit_points();
	this->Max_hit_point = FragTrap::get_Max_hit_point();
	this->Energy_points = NinjaTrap::get_Energy_points();
	this->Max_energy_points = NinjaTrap::get_Max_hit_point();
	this->Level = 1;
	this->Name = "SuperTrap";
	this->Melee_attack_damage = NinjaTrap::get_Melee_attack_damage();
	this->Ranged_attack_damage = FragTrap::get_Ranged_attack_damage();
	this->Armor_damage_reduction = FragTrap::get_Armor_damage_reduction();
	std::cout << "Super... SuperTrap 전투준비 완료" << std::endl;
}

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->Hit_points = FragTrap::get_Hit_points();
	this->Max_hit_point = FragTrap::get_Max_hit_point();
	this->Energy_points = NinjaTrap::get_Energy_points();
	this->Max_energy_points = NinjaTrap::get_Max_hit_point();
	this->Level = 1;
	this->Name = name;
	this->Melee_attack_damage = NinjaTrap::get_Melee_attack_damage();
	this->Ranged_attack_damage = FragTrap::get_Ranged_attack_damage();
	this->Armor_damage_reduction = FragTrap::get_Armor_damage_reduction();
	std::cout << "Super... SuperTrap 전투준비 완료" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &SuperTrap)
{
	std::cout << "Super~!! 하게 복사중!";
	*this = SuperTrap;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Super..한 나를 파괴하다니.." << std::endl;
}

SuperTrap & SuperTrap::operator = (const SuperTrap &SuperTrap)
{
	std::cout << "Super~!! 복사 완료!!" << std::endl;
	if (this == &SuperTrap)
		return (*this);
	this->Hit_points = SuperTrap.get_Hit_points();
	this->Max_hit_point = SuperTrap.get_Max_hit_point();
	this->Energy_points = SuperTrap.get_Energy_points();
	this->Max_energy_points = SuperTrap.get_Max_hit_point();
	this->Level = SuperTrap.get_Level();
	this->Name = SuperTrap.get_Name();
	this->Melee_attack_damage = SuperTrap.get_Melee_attack_damage();
	this->Ranged_attack_damage = SuperTrap.get_Ranged_attack_damage();
	this->Armor_damage_reduction = SuperTrap.get_Armor_damage_reduction();
	return (*this);
}

void	SuperTrap::rangedAttack(const std::string target)
{
	std::cout << "FragTrap 합체!!" << std::endl;
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(const std::string target)
{
	std::cout << "NinjaTrap 합체!!" << std::endl;
	NinjaTrap::rangedAttack(target);
}
