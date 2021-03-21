#pragma once
#include "Entity.h"
class NPC : public Entity
{
public:
	const std::string& GetMessage()
	{
		return message;
	}
	void SetMessage(const std::string& newMessage)
	{
		message = newMessage;
	}
private:
	std::string message;
};