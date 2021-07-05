/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:05:36 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/05 14:02:03 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->Hit_points = 100;
	this->Max_hit_point = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Name = "ClapTrap";
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}

ClapTrap::ClapTrap(const std::string & name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->Hit_points = 100;
	this->Max_hit_point = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Name = name;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}

ClapTrap::ClapTrap(const ClapTrap &_ClapTrap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = _ClapTrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &_ClapTrap)
{
	std::cout << _ClapTrap.Name << " 생산완료 " << std::endl;
	if (this == &_ClapTrap)
		return (*this);
	this->Hit_points = _ClapTrap.Hit_points;
	this->Max_hit_point = _ClapTrap.Max_hit_point;
	this->Energy_points = _ClapTrap.Energy_points;
	this->Max_energy_points = _ClapTrap.Max_energy_points;
	this->Level = _ClapTrap.Level;
	this->Name = _ClapTrap.Name;
	this->Melee_attack_damage = _ClapTrap.Melee_attack_damage;
	this->Ranged_attack_damage = _ClapTrap.Ranged_attack_damage;
	this->Armor_damage_reduction = _ClapTrap.Armor_damage_reduction;
	return (*this);
}

void		ClapTrap::set_Hit_points(int Hit_points)
{
	this->Hit_points = Hit_points;
}

void		ClapTrap::set_Max_hit_point(int Max_hit_point)
{
	this->Max_hit_point = Max_hit_point;
}

void		ClapTrap::set_Energy_points(int Energy_points)
{
	this->Energy_points = Energy_points;
}

void		ClapTrap::set_Max_energy_points(int Max_energy_points)
{
	this->Max_energy_points = Max_energy_points;
}

void		ClapTrap::set_Level(int Level)
{
	this->Level = Level;
}

void		ClapTrap::set_Name(std::string Name)
{
	this->Name = Name;
}

void		ClapTrap::set_Melee_attack_damage(int Melee_attack_damage)
{
	this->Melee_attack_damage = Melee_attack_damage;
}

void		ClapTrap::set_Ranged_attack_damage(int Ranged_attack_damage)
{
	this->Ranged_attack_damage = Ranged_attack_damage;
}

void		ClapTrap::set_Armor_damage_reduction(int Armor_damage_reduction)
{
	this->Armor_damage_reduction = Armor_damage_reduction;
}

unsigned int			ClapTrap::get_Hit_points() const
{
	return (this->Hit_points);
}

unsigned int			ClapTrap::get_Max_hit_point() const
{
	return (this->Max_hit_point);
}

unsigned int			ClapTrap::get_Energy_points() const
{
	return (this->Energy_points);
}

unsigned int			ClapTrap::get_Max_energy_points() const
{
	return (this->Max_energy_points);
}

unsigned int			ClapTrap::get_Level() const
{
	return (this->Level);
}

std::string	ClapTrap::get_Name() const
{
	return (this->Name);
}

unsigned int			ClapTrap::get_Melee_attack_damage() const
{
	return (this->Melee_attack_damage);
}

unsigned int			ClapTrap::get_Ranged_attack_damage() const
{
	return (this->Ranged_attack_damage);
}

unsigned int			ClapTrap::get_Armor_damage_reduction() const
{
	return (this->Armor_damage_reduction);
}

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->Name << ", " << target << "에 범위공격!" << std::endl;
	std::cout << this->Ranged_attack_damage << "를 주었다." << std::endl;
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->Name << ", " << target << "에 무차별 공격!" << std::endl;
	std::cout << this->Ranged_attack_damage << "를 주었다." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points - amount + this->Armor_damage_reduction <= 0)
		this->Hit_points = 0;
	else
	{
		this->Hit_points -= amount;
		if (this->Hit_points + this->Armor_damage_reduction > this->Max_hit_point)
			this->Hit_points = this->Max_hit_point;
		else
			this->Hit_points += this->Armor_damage_reduction;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hit_points + amount > this->Max_hit_point)
		this->Hit_points = Max_hit_point;
	else
		this->Hit_points += amount;
	if (this->Energy_points + amount > this->Max_energy_points)
		this->Energy_points = Max_energy_points;
	else
		this->Energy_points += amount;
}