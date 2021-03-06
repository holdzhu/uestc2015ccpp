#ifndef __SPRITESHEET_HPP__
#define __SPRITESHEET_HPP__

#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <map>
#include <SFML/Graphics/Texture.hpp>

class SpriteSheet
{
public:
    static bool loadFromFile(const std::string& filename);
    static sf::Texture& getTexture(const std::string& texturename);
private:
    static std::string m_filename;
    static std::string m_textureFilename;
    static std::map<std::string, sf::Texture> m_sheet;
    static void trim(std::string& str);
};

#endif // __SPRITESHEET_HPP__
