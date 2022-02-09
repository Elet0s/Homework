#include <iostream>
#include<crtdbg.h>
#include"TextScreen.h"
#include"Player.h"

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	TextScreen NewScreen(10,10,"��");
	
	Player NewPlayer(&NewScreen, "��");

	NewScreen.SettingScreen();

	while (true)
	{
		NewScreen.SettingScreen();
		NewPlayer.Render();
		NewScreen.PrintScreen();
		NewPlayer.Update();
	}

}
