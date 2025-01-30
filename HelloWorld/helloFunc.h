#pragma once
#include <iostream>
class funcClass
{
private:

public:
	funcClass()
	{

	}

	void HelloWorld(std::string hello)
	{
		std::cout << hello;
	}

	template<typename input>
	std::string CreateString(input stringconvert)
	{
		std::string translation;
		translation = stringconvert;
		return translation;
	}

};
