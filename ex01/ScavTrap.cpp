/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:27:01 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/02 19:52:22 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "짜잔! ScavTrap 나가신다~!" << std::endl;
	this->Hit_points = 100;
	this->Max_hit_point = 100;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Level = 1;
	this->Name = "ScavTrap";
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
	std::cout << this->Name << "을 선택하셨습니다." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "짜잔! ScavTrap 나가신다~!" << std::endl;
	this->Hit_points = 100;
	this->Max_hit_point = 100;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Level = 1;
	this->Name = name;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
	std::cout << this->Name << "을 선택하셨습니다." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &_ScavTrap)
{
	std::cout << _ScavTrap.Name << " 생산중!! 기다려 곧 간다구!! " << std::endl;
	*this = _ScavTrap;
}

ScavTrap::~ScavTrap()
{
    std::cout << "다음에 또 만나요~ 만날 수 있을지 모르겠지만" << std::endl;
	std::cout << "!!!!Booooooooooooooom!!!!" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &_ScavTrap)
{
	std::cout << _ScavTrap.Name << " 출격준비 끝! " << std::endl;
	if (this == &_ScavTrap)
		return (*this);
	this->Hit_points = _ScavTrap.Hit_points;
	this->Max_hit_point = _ScavTrap.Max_hit_point;
	this->Energy_points = _ScavTrap.Energy_points;
	this->Max_energy_points = _ScavTrap.Max_energy_points;
	this->Level = _ScavTrap.Level;
	this->Name = _ScavTrap.Name;
	this->Melee_attack_damage = _ScavTrap.Melee_attack_damage;
	this->Ranged_attack_damage = _ScavTrap.Ranged_attack_damage;
	this->Armor_damage_reduction = _ScavTrap.Armor_damage_reduction;
	return (*this);
}

void		ScavTrap::set_Hit_points(int Hit_points)
{
	this->Hit_points = Hit_points;
}

void		ScavTrap::set_Max_hit_point(int Max_hit_point)
{
	this->Max_hit_point = Max_hit_point;
}

void		ScavTrap::set_Energy_points(int Energy_points)
{
	this->Energy_points = Energy_points;
}

void		ScavTrap::set_Max_energy_points(int Max_energy_points)
{
	this->Max_energy_points = Max_energy_points;
}

void		ScavTrap::set_Level(int Level)
{
	this->Level = Level;
}

void		ScavTrap::set_Name(std::string Name)
{
	this->Name = Name;
}

void		ScavTrap::set_Melee_attack_damage(int Melee_attack_damage)
{
	this->Melee_attack_damage = Melee_attack_damage;
}

void		ScavTrap::set_Ranged_attack_damage(int Ranged_attack_damage)
{
	this->Ranged_attack_damage = Ranged_attack_damage;
}

void		ScavTrap::set_Armor_damage_reduction(int Armor_damage_reduction)
{
	this->Armor_damage_reduction = Armor_damage_reduction;
}

unsigned int			ScavTrap::get_Hit_points() const
{
	return (this->Hit_points);
}

unsigned int			ScavTrap::get_Max_hit_point() const
{
	return (this->Max_hit_point);
}

unsigned int			ScavTrap::get_Energy_points() const
{
	return (this->Energy_points);
}

unsigned int			ScavTrap::get_Max_energy_points() const
{
	return (this->Max_energy_points);
}

unsigned int			ScavTrap::get_Level() const
{
	return (this->Level);
}

std::string	ScavTrap::get_Name() const
{
	return (this->Name);
}

unsigned int			ScavTrap::get_Melee_attack_damage() const
{
	return (this->Melee_attack_damage);
}

unsigned int			ScavTrap::get_Ranged_attack_damage() const
{
	return (this->Ranged_attack_damage);
}

unsigned int			ScavTrap::get_Armor_damage_reduction() const
{
	return (this->Armor_damage_reduction);
}

void		ScavTrap::rangeAttack(std::string const &target)
{
	std::cout << "아하하 내 샷건 맛이 어떠냐!" << std::endl;
	std::cout << this->Name << ", " << target << "에 범위공격!" << std::endl;
	std::cout << this->Ranged_attack_damage << "를 주었다." << std::endl;
	std::cout << "효과는 굉장했다." << std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "넌 나를 건드리면 안됬어" << std::endl;
	std::cout << this->Name << ", " << target << "에 무차별 공격!" << std::endl;
	std::cout << this->Ranged_attack_damage << "를 주었다." << std::endl;
	std::cout << "효과는 굉장했다." << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
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
	std::cout << this->Name << "이 " << amount << " 만큼의 데미지를 받았다." << std::endl;
	std::cout << "Armor : " << this->Armor_damage_reduction << std::endl;
	std::cout << "앗! 따가워! 맞다 난 기계지?" << std::endl;
	std::cout << "현재 HP : " << this->Hit_points << std::endl;
	std::cout << "현재 EP : " << this->Energy_points << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	if (this->Hit_points + amount > this->Max_hit_point)
		this->Hit_points = Max_hit_point;
	else
		this->Hit_points += amount;
	if (this->Energy_points + amount > this->Max_energy_points)
		this->Energy_points = Max_energy_points;
	else
		this->Energy_points += amount;

	std::cout << this->Name << "의 체력이 " << amount << "만큼 회복했다." << std::endl;
	std::cout << this->Name << "의 에너지가 " << amount << "만큼 회복했다." << std::endl;
	std::cout << "어이 주모! 여기 최고급 기름 하나 더!" << std::endl;
	std::cout << "현재 HP : " << this->Hit_points << std::endl;
	std::cout << "현재 EP : " << this->Energy_points << std::endl;
}

void		ScavTrap::challengeNewcomer(void)
{
	std::string		challenge[5] =
	{
		"Let's dance!!",
		"Shell we dance?",
		"You make me happy",
		"How was your feeling?",
		"Let's kill all enemy!"
	};
	int		rand_num;
	srand(time(NULL) * rand());
	rand_num = rand() % 5;
	std::cout << challenge[rand_num] << std::endl;
}