#include "Subtitles.h"

#include <iostream>
#include <unistd.h>
#include <thread>

namespace Subtitles {

    void Simple(const char* text) {

        std::cout << text << "\n";

    }
    void Appear(const char* text, int speed) {
        
        int i = 0;
        while (text[i]) {

            std::cout << text[i] << std::flush;
            i++;
            std::this_thread::sleep_for(std::chrono::milliseconds(speed));

        }
        std::cout << "\n";

    }

}