#include <Interface/LayoutMainMenu.hpp>
#include <Interface/Colors.hpp>

#include <iostream>

LayoutMainMenu::LayoutMainMenu(int width, int height):
	Layout(width, height)
{
	this->windowsInit();
}
LayoutMainMenu::~LayoutMainMenu()
{
	this->windowsExit();
}
void LayoutMainMenu::windowsInit()
{
	// Only the main window for now
}
void LayoutMainMenu::windowsExit()
{ }
void LayoutMainMenu::draw()
{
	this->main->clear();

	this->main->print(" _     ____ _____  ___   _   __  ", 1, 1, Colors::pair(COLOR_RED, COLOR_DEFAULT));
	this->main->print("\\ \\_/ | |_   | |  | |_) | | ( (` ", 1, 2, Colors::pair(COLOR_RED, COLOR_DEFAULT));
	this->main->print(" |_|  |_|__  |_|  |_| \\ |_| _)_) ", 1, 3, Colors::pair(COLOR_RED, COLOR_DEFAULT));


	this->main->print("Press <enter> to start",
	                          1,
	                          this->main->getH() - 2,
	                          Colors::pair(COLOR_BLUE, COLOR_DEFAULT, true));

	this->main->refresh();
}
