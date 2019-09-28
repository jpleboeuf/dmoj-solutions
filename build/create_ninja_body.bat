@echo off

setlocal

if "%~1"=="" (
   echo The name of the problem must be given as argument!
   goto end
)

set prob_name=%~1
echo Generating `build.ninja` for '%prob_name%'...

echo # Ninja build file for problem '%prob_name%' > build.ninja
echo. >> build.ninja
echo include ../../build/build_head.ninja >> build.ninja
echo. >> build.ninja
echo build %prob_name%.exe: cc %prob_name%.cc >> build.ninja

:end

endlocal
