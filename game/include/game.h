#pragma once

#include <iostream>
#include "raylib.h"
#include "menu.h"
#include <fstream>
#include <string>
#include <iostream>

void levelbar(int remainTasks,int* level,int* score );
void game(SceneType& sceneState,int dec[8],int binaryValue[7],int binarySum,int* remainTasks,int* remainTasks1,int* valueBox1,int* valueBox2,int* valueBox3,int* valueBox4,int* valueBox5,int* valueBox6,int* valueBox7,int* valueBox8);
void login(SceneType& sceneState, bool* UserBoxEditMode ,bool* PassBoxEditMode,char* UserBoxInput, char* PassBoxInput);
void reg(SceneType& sceneState,bool* RUserBoxEditMode ,bool* RPassBoxEditMode,char* RUserBoxInput, char* RPassBoxInput);