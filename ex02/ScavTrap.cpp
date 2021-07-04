/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:27:01 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/04 20:27:21 by hyeolee          ###   ########.fr       */
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