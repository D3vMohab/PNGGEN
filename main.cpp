//
//  main.cpp
//  PNGGEN
//
//  Created by Mohab Hisham on 07/10/2023.
//


#include <fstream>
#include <cstring>
#include <stdio.h>


const int width = 700, height = 700;

int main()
{
    std::ofstream img("pic.png");
    img << "P6\n" << width << " " << height << "\n" << "255\n" ;
    
    
     

for (int y = 0; y < height; y++) {
    
    for (int x = 0; x < width; x++) {
        img << uint8_t(rand()%255);// << " ";
        img << uint8_t(rand()%255);// << " ";
        img << uint8_t(rand()%255);// << " ";
    }
    
}
    img.close();
    popen("open pic.png","w");
 
    return 0;
}

