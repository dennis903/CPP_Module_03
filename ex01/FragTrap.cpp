/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 19:05:48 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/05 14:02:15 by hyeolee          ###   ########.fr       */
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
	std::cout << this->Name << "을 선택하셨습니다." << std::endl;
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
	std::cout << this->Name << "을 선택하셨습니다." << std::endl;
}

FragTrap::FragTrap(const FragTrap &_FragTrap)
{
	std::cout << _FragTrap.Name << " 찍어내는중... " << std::endl;
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
	std::cout << _FragTrap.Name << " 생산완료 " << std::endl;
	if (this == &_FragTrap)
		return (*this);
	this->Hit_points = _FragTrap.Hit_points;
	this->Max_hit_point = _FragTrap.Max_hit_point;
	this->Energy_points = _FragTrap.Energy_points;
	this->Max_energy_points = _FragTrap.Max_energy_points;
	this->Level = _FragTrap.Level;
	this->Name = _FragTrap.Name;
	this->Melee_attack_damage = _FragTrap.Melee_attack_damage;
	this->Ranged_attack_damage = _FragTrap.Ranged_attack_damage;
	this->Armor_damage_reduction = _FragTrap.Armor_damage_reduction;
	return (*this);
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

void		FragTrap::set_Ranged_attack_damage(int Ranged_attack_damage)
{
	this->Ranged_attack_damage = Ranged_attack_damage;
}

void		FragTrap::set_Armor_damage_reduction(int Armor_damage_reduction)
{
	this->Armor_damage_reduction = Armor_damage_reduction;
}

unsigned int			FragTrap::get_Hit_points() const
{
	return (this->Hit_points);
}

unsigned int			FragTrap::get_Max_hit_point() const
{
	return (this->Max_hit_point);
}

unsigned int			FragTrap::get_Energy_points() const
{
	return (this->Energy_points);
}

unsigned int			FragTrap::get_Max_energy_points() const
{
	return (this->Max_energy_points);
}

unsigned int			FragTrap::get_Level() const
{
	return (this->Level);
}

std::string	FragTrap::get_Name() const
{
	return (this->Name);
}

unsigned int			FragTrap::get_Melee_attack_damage() const
{
	return (this->Melee_attack_damage);
}

unsigned int			FragTrap::get_Ranged_attack_damage() const
{
	return (this->Ranged_attack_damage);
}

unsigned int			FragTrap::get_Armor_damage_reduction() const
{
	return (this->Armor_damage_reduction);
}

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "수류탄 투척!" << std::endl;
	std::cout << this->Name << ", " << target << "에 범위공격!" << std::endl;
	std::cout << this->Ranged_attack_damage << "를 주었다." << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "Hyah!!!" << std::endl;
	std::cout << this->Name << ", " << target << "에 무차별 공격!" << std::endl;
	std::cout << this->Ranged_attack_damage << "를 주었다." << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
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
	std::cout << "시...시스템 에러.. Segmentation Fault.." << std::endl;
	std::cout << "현재 HP : " << this->Hit_points << std::endl;
	std::cout << "현재 EP : " << this->Energy_points << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
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
	std::cout << "키야 ~~ 역시 2억 5천만년산 석유가 최고야~!" << std::endl;
	std::cout << "현재 HP : " << this->Hit_points << std::endl;
	std::cout << "현재 EP : " << this->Energy_points << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	skill[5] =
	{
		"War machine",
		"Messive fire",
		"Rocket punch",
		"Rocket launcher",
		"Bomber time"
	};
	std::string skill_effect[5] =
	{
		"앞에 적들을 인식합니다. 요격개시!",
		"불맛좀 볼래? 메시브 퐈이아~!!!",
		"내 펀치는 좀 딱딱해, 한번 맞으면 꼼짝도 못할걸?",
		"로켓 20000발 장전 완료, 적들을 섬멸한다.",
		"폭탄 설치 완료, 0.0001초 뒤에 폭발합니다."
	};
	int rand_num;

	if (this->Energy_points >= 25)
	{
		srand(time(NULL) * rand());
		rand_num = rand() % 5;
		std::cout << skill[rand_num] << "을 사용하였습니다." << std::endl;
		std::cout << skill_effect[rand_num] << std::endl;
		std::cout << target << " 100의 데미지를 받았다." << std::endl;
		if (this->Energy_points - 25 < 0)
			this->Energy_points = 0;
		else
			this->Energy_points -= 25;
	}
	else if (this->Energy_points < 25)
		std::cout << "아 힘빠져.. 기름 줘 기름!!" << std::endl;
	std::cout << "현재 HP : " << this->Hit_points << std::endl;
	std::cout << "현재 EP : " << this->Energy_points << std::endl;
}