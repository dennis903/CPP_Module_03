/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 21:17:57 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/04 23:46:57 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
class NinjaTrap : virtual public ClapTrap
{
	private:
	public:
		NinjaTrap();
		NinjaTrap(const std::string & _name);
		NinjaTrap(const NinjaTrap & _NinjaTrap);
		~NinjaTrap();
		NinjaTrap &operator = (const NinjaTrap &NinjaTrap);
		void	ninjaShoebox(const ClapTrap &ClapTrap);
		void	ninjaShoebox(const NinjaTrap &NinjaTrap);
		void	ninjaShoebox(FragTrap &FragTrap);
		void	ninjaShoebox(ScavTrap &ScavTrap);
};
#endif