#pragma once
#include <experimental\filesystem>
#include <vector>
#include "cw\drawableObj.h"

class fileThingy{
public:
	fileThingy(std::experimental::filesystem::path);
	void draw(drawRenderer&)const;

private:
	std::vector<std::string> m_children;
	std::experimental::filesystem::path m_parent;
};

