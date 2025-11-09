<b>Asslamu-Alaikum</b>
# Raylib Setup Guide for C

This repository shows how to **install and run Raylib** using **C** on Windows with **MinGW and VS Code**.  
It includes setup instructions, sample code, and troubleshooting help.

---

### 💡 About Raylib
Raylib is an amazing open-source C library for making games and graphics, created by **Ramon Santamaria (@raysan5)** and contributors.  
Huge thanks to the **Raylib team** for their incredible work and for making game development in C so much fun! 🎮❤️

---

# 🎮 Raylib + MinGW Setup Guide (Windows Only)

This guide helps you quickly set up **Raylib** on **Windows** using **MinGW-w64** and run your first program.

---

## ✅ Step 1 — Install MinGW (GCC Compiler)

1. Download MinGW-w64 (64-bit recommended):  
   https://www.mingw-w64.org/downloads/
2. Install it. During installation, select:
   - **Architecture:** `x86_64`
   - **Threads:** `posix`
   - **Exception:** `seh`
3. Find the **bin** folder inside the installation directory.
4. Copy its path. Example:

---

## ✅ Step 2 — Add MinGW to PATH

1. Press **Win + R**, type: `sysdm.cpl`
2. Go to **Advanced → Environment Variables**
3. Under *System Variables*, choose **Path → Edit → New**
4. Paste the **bin** folder path.
5. Click **OK** to save.

> Test in Command Prompt:
If it prints version info, MinGW is working.

---

## ✅ Step 3 — Download Raylib for Windows

Download the MinGW-ready Windows package:


From: https://www.raylib.com/

Extract it somewhere easy, e.g.:


---

## ✅ Step 4 — Link Raylib When Compiling

In the extracted Raylib folder, note:


Create a file named **build.bat** in your project folder:

```bat
gcc main.c -I C:\raylib\include -L C:\raylib\lib -lraylib -lopengl32 -lgdi32 -lwinmm -o game.exe
game.exe
#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "Hello Raylib!");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Raylib is working!", 190, 200, 20, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "Hello Raylib!");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Raylib is working!", 190, 200, 20, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
