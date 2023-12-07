/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:57:13 by pmaimait          #+#    #+#             */
/*   Updated: 2023/12/06 15:40:59 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"


/* class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get(); return o;
}

template<typename T >
void print(T& x)
{
	std::cout << x << std::endl;
	return;
}

int main()
{
	int 		arrayInt[] = { 0, 1, 2, 3, 4 }; 
	char		arrayChar[] = {'a', 'b', 'c'};
	std::string	arrayString[] = {"Hello", "Bonjour", "yahshimu siz"};
	Awesome 	arrayclass[5];

	iter( arrayInt, 5, print );
	iter( arrayChar, 3, print );
	iter( arrayString, 3, print );
	iter( arrayclass, 5, print );

	return 0;
} */

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T const &x)
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}