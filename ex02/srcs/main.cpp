/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:41:08 by pmaimait          #+#    #+#             */
/*   Updated: 2023/12/06 13:37:46 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"
#include <cstdlib>
int main()
{
	{
		int * a = new int();
		std::cout << "a = " << *a << std::endl;
		delete a;
	}
	std::cout << "###########11111######################################" << std::endl;
	{
		try
		{
			Array<int> tint;
			std::cout << "tint size = " << tint.size() << std::endl;
			std::cout << "tint[0] = " << tint[0] << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	std::cout << "###########22222######################################" << std::endl;
	{
		try
		{
			Array<int> tint(1);
			tint[1] = 23;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "###########33333######################################" << std::endl;
	{
		try
		{
			Array<int> tint(1);
			tint[-4] = 23;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "###########44444######################################" << std::endl;
	try
	{
		Array<int> tint(42);
		Array<char> tchar(42);
		Array<std::string> tstr(42);
		Array<bool> tbool(42);
		std::cout << std::endl;
		
		std::cout << "tint size = " << tint.size() << std::endl;
		std::cout << "tchar size = " << tchar.size() << std::endl;
		std::cout << "tstr size = " << tstr.size() << std::endl;
		std::cout << "tbool size = " << tbool.size() << std::endl << std::endl;

		tint[4] = 23;
		tstr[4] = "Long long long str !";
		std::cout << "tint[0] = " << tint[0] << std::endl;
		std::cout << "tstr[0] = " << tstr[0] << std::endl;

		std::cout << "tint[5] = " << tint[5] << std::endl;
		std::cout << "tstr[5] = " << tstr[5] << std::endl;
		tint[5] = 24;
		tstr[5] = "short str !";
		std::cout << "tint[4] = " << tint[4] << std::endl;
		std::cout << "tstr[4] = " << tstr[4] << std::endl;

		std::cout << "tint[5] = " << tint[5] << std::endl;
		std::cout << "tstr[5] = " << tstr[5] << std::endl;

		std::cout << "###########55555######################################" << std::endl;

		std::cout << "tbool[41] = " << tbool[41] << std::endl;
		tbool[41] = false;
		std::cout << "tbool[41] = " << tbool[41] << std::endl;

		std::cout << "###########666666######################################" << std::endl;
		Array<char>test(3);
		Array<char>test2(4);
		std::cout << "test size = " << test.size() << std::endl;
		std::cout << "test2 size = " << test2.size() << std::endl;
		std::cout << "test2[1] = " << test2[1] << std::endl;
		test[0] = 'a' ; 
		test[1] = 'b' ;
		test[2] = 'c';
		test2 = test;
		std::cout << "test size = " << test.size() << std::endl;
		std::cout << "test2 size = " << test2.size() << std::endl;
		std::cout << "test2[1] = " << test2[1] << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

/* #define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
		std::cout << "i am here ####################\n";
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
} */