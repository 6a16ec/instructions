1. Install the MinGW compiler (Change the architecture to x86-64 during installation)

https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download

2. Download the latest version of curl. Unzip it. Rename the folder to `curl`. Move it to C:\Users\Public\ folder.

https://curl.se/windows/

3. Copy `C:\Users\Public\curl\bin\libcurl-x64.dll` file to the `cmake-build-debug` project folder.

4. Это всё, почувствуй себя свободным, чтобы использовать примеры использования библиотеки
https://github.com/curl/curl/blob/master/docs/examples
