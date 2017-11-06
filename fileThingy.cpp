#include "fileThingy.h"



fileThingy::fileThingy(std::experimental::filesystem::path path){
	m_parent = path.parent_path;
	for(auto& item:path.stem()){
		
	}
}

