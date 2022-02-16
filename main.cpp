#include <iostream>

using namespace std;

#include <SPM/src/spm.h>

int main() {

    auto window = SDL_CreateWindow("app_using_spm", 0, 0, 400, 400, 0);

    auto surface = SDL_GetWindowSurface(window);

    SPM_FillArea(surface, 0, 0, surface->w, surface->h, 0x220022);
    SPM_Rect(surface, 40, 40, 360, 360, 0xffff00);
    SDL_UpdateWindowSurface(window);
    SDL_Delay(5000);

    cout << "Finished" << endl;
    return 0;
}
