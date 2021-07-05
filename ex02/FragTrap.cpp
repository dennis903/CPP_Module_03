/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 19:05:48 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/05 14:02:12 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
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

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
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

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "수류탄 투척!" << std::endl;
	ClapTrap::rangedAttack(target);
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "Hyah!!!" << std::endl;
	ClapTrap::meleeAttack(target);
}
