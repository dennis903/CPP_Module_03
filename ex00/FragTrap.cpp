/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 19:05:48 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/01 21:45:08 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "날 선택했단 말이야?" << std::endl;
	std::cout << "이번엔 진짜 재밌을거야, 내가 약속해!" << std::endl;
	this->Hit_points = 100;
	this->Max_hit_point = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Name = "FragTrap";
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "날 선택했단 말이야?" << std::endl;
	std::cout << "이번엔 진짜 재밌을거야, 내가 약속해!" << std::endl;
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

FragTrap::FragTrap(const FragTrap &_FragTrap)
{
	std::cout << _FragTrap.Name << " 생산 완료 " << std::endl;
	*this = _FragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << this->Name << " 폭파까지 앞으로 남은 시간 : 10" << std::endl;
	std::cout << this->Name << " 폭파까지 앞으로 남은 시간 : 9" << std::endl;
	std::cout << this->Name << " 폭파까지 앞으로 남은 시간 : 8" << std::endl;
	std::cout << this->Name << " 폭파까지 앞으로 남은 시간 : 7" << std::endl;
	std::cout << this->Name << " 폭파까지 앞으로 남은 시간 : 6" << std::endl;
	std::cout << this->Name << " 폭파까지 앞으로 남은 시간 : 5" << std::endl;
	std::cout << this->Name << " 폭파까지 앞으로 남은 시간 : 4" << std::endl;
	std::cout << this->Name << " 폭파까지 앞으로 남은 시간 : 3" << std::endl;
	std::cout << this->Name << " 폭파까지 앞으로 남은 시간 : 2" << std::endl;
	std::cout << this->Name << " 폭파까지 앞으로 남은 시간 : 1" << std::endl;
	std::cout << this->Name << " 폭파까지 앞으로 남은 시간 : 0" << std::endl;
	std::cout << "!!!!Booooooooooooooom!!!!" << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap &_FragTrap)
{
	std::cout << _FragTrap.Name << " 찍어내는중..." << std::endl;
	this->Hit_points = _FragTrap.Hit_points;
	this->Max_hit_point = _FragTrap.Max_hit_point;
	this->Energy_points = _FragTrap.Energy_points;
	this->Max_energy_points = _FragTrap.Max_energy_points;
	this->Level = _FragTrap.Level;
	this->Name = _FragTrap.Name;
	this->Melee_attack_damage = _FragTrap.Melee_attack_damage;
	this->Ranged_attack_damage = _FragTrap.Ranged_attack_damage;
	this->Armor_damage_reduction = _FragTrap.Armor_damage_reduction;
}

void		FragTrap::set_Hit_points(int Hit_points)
{
	this->Hit_points = Hit_points;
}

void		FragTrap::set_Max_hit_point(int Max_hit_point)
{
	this->Max_hit_point = Max_hit_point;
}

void		FragTrap::set_Energy_points(int Energy_points)
{
	this->Energy_points = Energy_points;
}

void		FragTrap::set_Max_energy_points(int Max_energy_points)
{
	this->Max_energy_points = Max_energy_points;
}

void		FragTrap::set_Level(int Level)
{
	this->Level = Level;
}

void		FragTrap::set_Name(std::string Name)
{
	this->Name = Name;
}

void		FragTrap::set_Melee_attack_damage(int Melee_attack_damage)
{
	this->Melee_attack_damage = Melee_attack_damage;
}

void		FragTrap::set_Ranged_attack_damage(int Range_attack_damage)
{
	this->Ranged_attack_damage = Melee_attack_damage;
}

void		FragTrap::set_Armor_damage_reduction(int Armor_damage_reduction)
{
	this->Armor_damage_reduction = Armor_damage_reduction;
}

int			FragTrap::get_Hit_points() const
{
	return (this->Hit_points);
}

int			FragTrap::get_Max_hit_point() const
{
	return (this->Max_hit_point);
}

int			FragTrap::get_Energy_points() const
{
	return (this->Energy_points);
}

int			FragTrap::get_Max_energy_points() const
{
	return (this->Max_energy_points);
}

int			FragTrap::get_Level() const
{
	return (this->Level);
}

std::string	FragTrap::get_Name() const
{
	return (this->Name);
}

int			FragTrap::get_Melee_attack_damage() const
{
	return (this->Melee_attack_damage);
}

int			FragTrap::get_Ranged_attack_damage() const
{
	return (this->Ranged_attack_damage);
}

int			FragTrap::get_Armor_damage_reduction() const
{
	return (this->Armor_damage_reduction);
}

void		FragTrap::rangeAttack(std::string const &target)
{
	std::cout << "수류탄 투척!" << std::endl;
	std::cout << this->Name << ", " << target << "에 범위공격!" << std::endl;
	std::cout << this->Ranged_attack_damage << "를 주었다." << std::endl;
	std::cout << "효과는 굉장했다." << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "Hyah!!!" << std::endl;
	std::cout << this->Name << ", " << target << "에 무차별 공격!" << std::endl;
	std::cout << this->Ranged_attack_damage << "를 주었다." << std::endl;
	std::cout << "효과는 굉장했다." << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points - amount + this->Armor_damage_reduction <= 0)
		this->Hit_points = 0;
	else
	{
		this->Hit_points -= amount;
		this->Hit_points += this->Armor_damage_reduction;
	}
	std::cout << amount << " 만큼의 데미지를 받았다." << std::endl;
	std::cout << "시...시스템 에러.." << std::endl;
	std::cout << "현재 HP : " << this->Hit_points << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	if (this->Hit_points + amount > this->Max_hit_point)
		this->Hit_points = Max_hit_point;
	else
		this->Hit_points += amount;
	std::cout << amount << "만큼의 체력을 회복했다." << std::endl;
	std::cout << "키야 ~~ 역시 2억 5천만년산 석유가 최고야~!" << std::endl;
	std::cout << "현재 HP : " << this->Hit_points << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	
}