@echo off
setlocal

:: Find the first .c file in the current folder
for %%f in (*.c) do (
    set "filename=%%~nf"
    goto :build
)

echo No .c file found in this folder!
pause
exit /b

:build
echo Compiling %%f ...
gcc "%filename%.c" ^
-IC:/raylib-5.5_win64_mingw-w64/include ^
-LC:/raylib-5.5_win64_mingw-w64/lib ^
-lraylib -lopengl32 -lgdi32 -lwinmm ^
-std=c11 -O2 -o "%filename%.exe"

if exist "%filename%.exe" (
    echo.
    echo Running %filename%.exe ...
    "%filename%.exe"
) else (
    echo.
    echo ❌ Build failed.
)

pause
