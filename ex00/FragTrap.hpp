/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:41:36 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/01 20:38:44 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include <string>

class			FragTrap
{
	private:
		int		Hit_points;
		int		Max_hit_point;
		int		Energy_points;
		int		Max_energy_points;
		int		Level;
		std::string	Name;
		int		Melee_attack_damage;
		int		Ranged_attack_damage;
		int		Armor_damage_reduction;
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &_FragTrap);
		~FragTrap();
		FragTrap &operator = (const FragTrap &_FragTrap);
		void		set_Hit_points(int Hit_points);
		void		set_Max_hit_point(int Max_hit_point);
		void		set_Energy_points(int Energy_points);
		void		set_Max_energy_points(int Max_energy_points);
		void		set_Level(int Level);
		void		set_Name(std::string Name);
		void		set_Melee_attack_damage(int Melee_attack_damage);
		void		set_Ranged_attack_damage(int Range_attack_damage);
		void		set_Armor_damage_reduction(int Armor_damage_reduction);
		int			get_Hit_points() const;
		int			get_Max_hit_point() const;
		int			get_Energy_points() const;
		int			get_Max_energy_points() const;
		int			get_Level() const;
		std::string	get_Name() const;
		int			get_Melee_attack_damage() const;
		int			get_Ranged_attack_damage() const;
		int			get_Armor_damage_reduction() const;
		void		rangeAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const & target);
		
};
#endif