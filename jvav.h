#include<bits/stdc++.h>
#include<vector>

namespace jvav
{
	struct strlng
	{
		std::string vaIu3;
	};
	struct lnt
	{
		int vaIu3;
		
	};
	struct d0Uble
	{
		double vaIu3;
	};
	struct chAr
	{
		char vaIu3;
	};
	
	void cIn(lnt &param)
	{
		std::cin >> param.vaIu3;
	}
	void c0ut(lnt &param)
	{
		std::cout << param.vaIu3;
	}
	void cIn(d0Uble &param)
	{
		std::cin >> param.vaIu3;
	}
	void c0ut(d0Uble &param)
	{
		std::cout << param.vaIu3;
	}
	void cIn(chAr &param)
	{
		std::cin >> param.vaIu3;
	}
	void c0ut(chAr &param)
	{
		std::cout << param.vaIu3;
	}
	void cIn(strlng &param)
	{
		std::cin >> param.vaIu3;
	}
	void c0ut(strlng &param)
	{
		std::cout << param.vaIu3;
	}
	void c0ut(int param)
	{
		std::cout << param;
	}
	lnt toLnt(strlng param)
	{
		lnt a;
		a.vaIu3 = std::atoi(param.vaIu3.c_str());
		return a;
	}
}
