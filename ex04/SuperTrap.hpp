/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 22:58:13 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/05 00:05:50 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
	public:
		SuperTrap();
		SuperTrap(const std::string &name);
		SuperTrap(const SuperTrap &SuperTrap);
		~SuperTrap();
		SuperTrap &operator = (const SuperTrap &SuperTrap);
		void	rangedAttack(const std::string target);
		void	meleeAttack(const std::string target);
};
