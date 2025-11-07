#include "raylib.h"

int main() {
    // Window setup
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Raylib Test Game");

    Vector2 ballPosition = { screenWidth/2.0f, screenHeight/2.0f };
    float speed = 5.0f;

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // Movement
        if (IsKeyDown(KEY_RIGHT)) ballPosition.x += speed;
        if (IsKeyDown(KEY_LEFT))  ballPosition.x -= speed;
        if (IsKeyDown(KEY_UP))    ballPosition.y -= speed;
        if (IsKeyDown(KEY_DOWN))  ballPosition.y += speed;

        // Draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Move the ball with arrow keys!", 200, 20, 20, DARKGRAY);
            DrawCircleV(ballPosition, 30, RED);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

