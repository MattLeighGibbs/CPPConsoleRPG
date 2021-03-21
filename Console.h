#pragma once
#include <string>
#include <iostream>
#include <thread>

#define QUICK_SLEEP 450

class Console
{
public:
	/// <summary>
	///  write to console, with a typing-like effect
	/// </summary>
	/// <param name="message"></param>
	void Put(const std::string& message)
	{
		for (int i = 0; i < message.size(); i++)
		{
			// use this to model a more realistic 'typing' speed 
			//std::chrono::milliseconds stutteredSleep = std::chrono::milliseconds(QUICK_SLEEP / ((rand() % 10) + 1) );
			
			std::this_thread::sleep_for(std::chrono::milliseconds(QUICK_SLEEP));
			std::cout << message[i];
		}
	}
};