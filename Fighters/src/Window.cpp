#include "Window.hpp"
#include "Global.hpp"
#include <iostream>

Window::Window() : RenderWindow(sf::VideoMode(360, 600), "Fighters")
{
	m_view.setCenter(screenWidth / 2, screenHeight / 2);
	m_view.setSize(screenWidth, screenHeight);
	setView(m_view);
	setFramerateLimit(60);
}

void Window::onResize()
{
	m_view.setSize(screenHeight * getSize().x / getSize().y, screenHeight);
	setView(m_view);
}
