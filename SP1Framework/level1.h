#include "main.h"
#include "gameover.h"
#include "Framework\timer.h"
#include "level2.h"
#include "ai.h"
#include "health.h"

//Linking Timer.
extern double  g_dBounceTime;
extern double g_dElapsedTime;
extern double  g_dDeltaTime;
extern double g_dCountTime;
extern bool g_abKeyPressed[K_COUNT];

//Linking Console.
extern Console g_Console;
extern LEVELS load;

//Linking Map.
extern const unsigned int x;
extern const unsigned int y;
extern char map[25][80];

//Linking characters and enemies.
extern SGameChar g_sChar;
extern SGameChar g_nChar;
extern SGameChar g_enemy;
extern SGameChar g_enemy2;
extern SGameChar g_door1;
extern SGameChar g_lever1;
extern SGameChar g_box1;
extern SGameChar release_enemy;
extern SGameChar g_powerup;
extern SGameChar g_timeboost;

//Linking game states.
extern EGAMESTATES g_eGameState;
extern LEVELS load;

//Definition for function.
void level1(); // level 1.