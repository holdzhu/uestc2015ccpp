#include <ctime>
#include <SFML/System.hpp>
#include "SpriteSheet.hpp"
#include "Background.hpp"
#include "Hero.hpp"
#include "Hero2.hpp"
#include "Enemy.hpp"
#include "Ufo.hpp"
#include "Game.hpp"
#include "Sound.hpp"
#include "Font.hpp"
#include "Shader.hpp"

using namespace std;

sf::Clock gameClock;

int main()
{
	srand((int)time(0));
	SpriteSheet::loadFromFile(packPath);
	Background::loadResources();
	Hero::loadResources();
	Enemy::loadResources();
	Bullet::loadResources();
	Ufo::loadResources();
	Sound::loadResources();
	Font::loadResources();
	Shader::loadResources();
	Hero2::loadResources();
    Game game;
    game.play();
    return 0;
}
