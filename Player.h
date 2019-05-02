#pragma once
#include "NPC.h"
#include <SFML\Graphics.hpp>
#include <string>
#include <iostream>


class Player : public NPC
{
private:
	int		m_Health{ 20 };
	int		m_Mana{ 10 };
public:
	Player(float x, float y, std::string fileName);
	virtual void setName(std::string name) override;
	virtual ~Player();
};