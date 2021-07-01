/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:41:36 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/01 18:49:31 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		int		Name;
		int		Melee_attack_damage;
		int		Ranged_attack;
		int		Armor_damage_reduction;
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &_FragTrap);
		~FragTrap();
		FragTrap &operator = (const FragTrap &_FragTrap);
		void	set_Hit_points(int Hit_points);
		void	set_Max_hit_point(int Max_hit_point);
		void	set_Energy_points(int Energy_points);
		void	set_Max_energy_points(int Max_energy_points);
		void	set_Level(int Level);
		void	set_Name(std::string Name);
		void	set_Melee_attack_damage(int Melee_attack_damage);

};