#include <cstdio>

#define SDL_MAIN_HANDLED
#include <SDL.h>

int main(void) {
    if (SDL_Init(0) < 0) {
        fprintf(stderr, "SDL_Init() failed with: %s", SDL_GetError());
        return -1;
    }
    SDL_version version;
    SDL_GetVersion(&version);
    printf("SDL version %d.%d.%d on %s\n", version.major, version.minor, version.patch, SDL_GetPlatform());
    SDL_Quit();
    return 0;
}
