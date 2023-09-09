#include "Subtitles.h"

#include <unistd.h>

int main() {

    Subtitles::Simple("A test of some simple subtitles");
    sleep(0.5f);
    Subtitles::Appear("These subtitles should appear letter by letter, so lets see it!", 50);
    Subtitles::Appear("These ones should fly by really quickly and appear almost all at once!", 30);
    Subtitles::Appear("And these ones should slowly appear like as if I was talking reeeal slow", 100);

    return 0;

}