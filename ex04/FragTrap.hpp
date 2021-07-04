/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:41:36 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/04 23:46:35 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
class			FragTrap : virtual public ClapTrap
{
	private:
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &_FragTrap);
		~FragTrap();
		FragTrap &operator = (const FragTrap &_FragTrap);
		void		vaulthunter_dot_exe(std::string const & target);
};
#endif