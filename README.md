### Project: Line Follower

## Board: STM32F411 Black Pill

Project is adjusted to ROBOCOMP competition rules. I've decided to use black pill board, because of the size,
performence and features included to this small beast.

### OS: FreeRTOS

### Code: C, CPP & Registers

### Additional: datasheet, user manual & IoT.

## Commands:

```
docker run --rm -v ${PWD}:/workspace stm32-builder sh -c "cmake -B build -DCMAKE_TOOLCHAIN_FILE=cmake/gcc-arm-none-eabi.cmake -G 'Unix Makefiles' && cmake --build build"

openocd -f interface/stlink.cfg -f target/stm32f4x.cfg -c "program build/LineFollower.elf verify reset exit"
```