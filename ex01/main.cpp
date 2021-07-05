/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 22:31:09 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/05 14:34:58 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void		change_to_upper(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

int			select_character(void)
{
	std::string		select;

	std::cout << "=========== 게임 시작 ===========" << std::endl;
	std::cout << "1. FragTrap    2. ScavTrap" << std::endl;
	std::cout << "캐릭터 번호를 입력해주십시오. : ";
	std::getline(std::cin, select);
	if (std::cin.eof() == true)
		exit(-1);
	if (!(select.compare("1") == 0 || select.compare("2") == 0))
		std::cout << "삐빅.. 캐릭터 번호가 아닌 다른게 들어왔어요! 자동으로 FragTrap이 선택되셨습니다." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	if (select.compare("1") == 0)
		return (1);
	return (2);
}

void		command_manual()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "=== FragTrap Command ===" << std::endl;
	std::cout << "ra : 범위 공격을 실시합니다." << std::endl;
	std::cout << "ma : 무차별 공격을 실시합니다." << std::endl;
	std::cout << "damaged : 공격을 받습니다." << std::endl;
	std::cout << "repaired : 체력과 에너지를 회복합니다." << std::endl;
	std::cout << "skill : 랜덤한 스페셜 스킬을 사용합니다." << std::endl;
	std::cout << "copy : 캐릭터를 하나 더 만듭니다." << std::endl;
	std::cout << "status : FragTrap의 상태를 보여줍니다." << std::endl;
	std::cout << "exit : 게임을 종료합니다." << std::endl;
	std::cout << "help : command 메뉴얼을 불러옵니다." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

void		FragTrap_basic_command(void)
{
	std::string	command;
	FragTrap FragTrap_basic;
	while (1)
	{
		std::cout << "command를 입력하시오 : ";
		std::getline(std::cin, command);
		if (std::cin.eof() == true)
			break ;
		if (command.compare("exit") == 0)
			break ;
		else if (command.compare("ra") == 0)
		{
			FragTrap_basic.rangedAttack("enemy");
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("ma") == 0)
		{
			FragTrap_basic.meleeAttack("enemy");
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("damaged") == 0)
		{
			FragTrap_basic.takeDamage(10);
			if (FragTrap_basic.get_Hit_points() == 0)
			{
				std::cout << "로... 로봇은 죽지 않아요.." << std::endl;
				break ;
			}
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("copy") == 0)
		{
			FragTrap copy(FragTrap_basic);
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("repaired") == 0)
		{
			FragTrap_basic.beRepaired(25);
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("skill") == 0)
		{
			FragTrap_basic.vaulthunter_dot_exe("enemy");
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("status") == 0)
		{
			std::cout << "현재 HP : " << FragTrap_basic.get_Hit_points() << std::endl;
			std::cout << "현재 EP : " << FragTrap_basic.get_Energy_points() << std::endl;
		}
		else if (command.compare("exit") == 0)
		{
			std::cout << "게임종료" << std::endl;
			break ;
		}
		else if (command.compare("help") == 0)
			command_manual();
		else
			std::cout << "command를 잘못 입력하였습니다." << std::endl;
	}

}

void		FragTrap_appoint_command(const std::string &select)
{
	std::string	command;
	FragTrap FragTrap_appoint(select);

	while (1)
	{
		std::cout << "command를 입력하시오 : ";
		std::getline(std::cin, command);
		std::cout << std::endl;
		std::cout << std::endl;
		if (std::cin.eof() == true)
			break ;
		if (command.compare("exit") == 0)
			break ;
		else if (command.compare("ra") == 0)
		{
			FragTrap_appoint.rangedAttack("enemy");
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("ma") == 0)
		{
			FragTrap_appoint.meleeAttack("enemy");
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("damaged") == 0)
		{
			FragTrap_appoint.takeDamage(10);
			if (FragTrap_appoint.get_Hit_points() == 0)
			{
				std::cout << "로... 로봇은 죽지 않아요.." << std::endl;
				break ;
			}
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("copy") == 0)
		{
			FragTrap copy(FragTrap_appoint);
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("repaired") == 0)
		{
			FragTrap_appoint.beRepaired(25);
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("skill") == 0)
		{
			FragTrap_appoint.vaulthunter_dot_exe("enemy");
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("status") == 0)
		{
			std::cout << "현재 HP : " << FragTrap_appoint.get_Hit_points() << std::endl;
			std::cout << "현재 EP : " << FragTrap_appoint.get_Energy_points() << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("exit") == 0)
		{
			std::cout << "게임종료" << std::endl;
			break ;
		}
		else if (command.compare("help") == 0)
			command_manual();
		else
			std::cout << "command를 잘못 입력하였습니다." << std::endl;
	}	
}

void		ScavTrap_basic_command()
{
	std::string	command;
	ScavTrap ScavTrap_basic;

	while (1)
	{
		std::cout << "command를 입력하시오 : ";
		std::getline(std::cin, command);
		if (std::cin.eof() == true)
			break ;
		if (command.compare("exit") == 0)
			break ;
		else if (command.compare("ra") == 0)
		{
			ScavTrap_basic.rangedAttack("enemy");
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("ma") == 0)
		{
			ScavTrap_basic.meleeAttack("enemy");
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("damaged") == 0)
		{
			ScavTrap_basic.takeDamage(10);
			if (ScavTrap_basic.get_Hit_points() == 0)
			{
				std::cout << "로... 로봇은 죽지 않아요.." << std::endl;
				break ;
			}
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("copy") == 0)
		{
			ScavTrap copy(ScavTrap_basic);
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("repaired") == 0)
		{
			ScavTrap_basic.beRepaired(25);
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("skill") == 0)
		{
			ScavTrap_basic.challengeNewcomer();
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("status") == 0)
		{
			std::cout << "현재 HP : " << ScavTrap_basic.get_Hit_points() << std::endl;
			std::cout << "현재 EP : " << ScavTrap_basic.get_Energy_points() << std::endl;
		}
		else if (command.compare("exit") == 0)
		{
			std::cout << "게임종료" << std::endl;
			break ;
		}
		else if (command.compare("help") == 0)
			command_manual();
		else
			std::cout << "command를 잘못 입력하였습니다." << std::endl;
	}
}

void		ScavTrap_appoint_command(std::string name)
{
	std::string	command;
	ScavTrap ScavTrap_appoint(name);

	while (1)
	{
		std::cout << "command를 입력하시오 : ";
		std::getline(std::cin, command);
		if (std::cin.eof() == true)
			break ;
		if (command.compare("exit") == 0)
			break ;
		else if (command.compare("ra") == 0)
		{
			ScavTrap_appoint.rangedAttack("enemy");
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("ma") == 0)
		{
			ScavTrap_appoint.meleeAttack("enemy");
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("damaged") == 0)
		{
			ScavTrap_appoint.takeDamage(10);
			if (ScavTrap_appoint.get_Hit_points() == 0)
			{
				std::cout << "로... 로봇은 죽지 않아요.." << std::endl;
				break ;
			}
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("copy") == 0)
		{
			ScavTrap copy(ScavTrap_appoint);
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("repaired") == 0)
		{
			ScavTrap_appoint.beRepaired(25);
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("skill") == 0)
		{
			ScavTrap_appoint.challengeNewcomer();
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else if (command.compare("status") == 0)
		{
			std::cout << "현재 HP : " << ScavTrap_appoint.get_Hit_points() << std::endl;
			std::cout << "현재 EP : " << ScavTrap_appoint.get_Energy_points() << std::endl;
		}
		else if (command.compare("exit") == 0)
		{
			std::cout << "게임종료" << std::endl;
			break ;
		}
		else if (command.compare("help") == 0)
			command_manual();
		else
			std::cout << "command를 잘못 입력하였습니다." << std::endl;
	}

}

int			main()
{
	int			select;
	std::string name;
	std::string character;
	std::string command;

	while (1)
	{
		select = select_character();
		std::cout << "이름을 입력해주세요(프로그램을 종료하실려면 exit을 입력해주세요.) : ";
		std::getline(std::cin, name);
		if (std::cin.eof() == true)
			return (-1);
		if (name.compare("exit") != 0)
			command_manual();
		if (select == 1)
		{
			if (name.compare("\0") == 0)
				FragTrap_basic_command();
			else if (!(name.compare("exit") == 0))
				FragTrap_appoint_command(name);
			else if (name.compare("exit") == 0)
				break ;
			else
				std::cout << "다시 입력해 주십시오." << std::endl;
		}
		else if (select == 2)
		{
			if (name.compare("\0") == 0)
				ScavTrap_basic_command();
			else if (!(name.compare("exit") == 0))
				ScavTrap_appoint_command(name);
			else if (name.compare("exit") == 0)
				break ;
			else
				std::cout << "다시 입력해 주십시오." << std::endl;
		}
	}
	return (0);
}