#ifndef ENGINE_H
#define ENGINE_H

#include <ncurses.h>

typedef struct {
  void (*init)();
  void (*update)();
  void (*render)();
  void (*cleanup)();
} Game;

void engine_run(Game *game);
void engine_inti();
void engine_cleanup();

#endif // !ENGINE_H