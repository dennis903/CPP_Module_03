/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:27:03 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/05 14:00:20 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
class			ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &_ScavTrap);
		~ScavTrap();
		ScavTrap &operator = (const ScavTrap &_ScavTrap);
		void		challengeNewcomer(void);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
};
#endif