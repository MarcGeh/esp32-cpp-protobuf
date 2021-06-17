# Protobuf c++ component for esp32

This is an example project for the esp32 with protobuf v3.15.2 as c++ component.



## Requirements

- [ESP-IDF 4.2.1](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/)

The whole project will not compile with ESP-IDF 4.2.1 because of an error which occurs during the generation of the binary. As described in this [github issue](https://github.com/espressif/esp-idf/issues/7160) it has already been fixed (branch release/4.3 and release/4.2) and building this component with esp-idf v4.2.1 needs some cherry picking. Go ahead and use [o-marshmallow's description](https://github.com/espressif/esp-idf/issues/7160#issuecomment-862913956) on how to solve that issue.

## Running the example project

In [main/main.cc](main/main.cc) you'll find an example serializing and deserializing a protobuf message.

1. Setup ESP-IDF as described in the [get started guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/)
2. Go into ESP-IDF directory
3. Make sure `IDF_PATH` points to the ESP-IDF directory
4. Run `source export.sh`
5. Go into project directory
6. Run `idf.py menuconfig` to setup for the hardware you want to run this on
7. [Connect ESP32 via USB](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/#step-6-connect-your-device)
8. Run `idf.py -p PORT flash monitor`. [See here](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/#step-9-flash-onto-the-device) for tips on how
to find out the proper `PORT`.

Example output:

```
I (27) boot: ESP-IDF v4.2.1-2-g222cc54cf-dirty 2nd stage bootloader
I (27) boot: compile time 09:08:38
I (27) boot: chip revision: 3
I (32) boot_comm: chip revision: 3, min. bootloader chip revision: 0
I (39) boot.esp32: SPI Speed      : 40MHz
I (43) boot.esp32: SPI Mode       : DIO
I (48) boot.esp32: SPI Flash Size : 8MB
I (53) boot: Enabling RNG early entropy source...
I (58) boot: Partition Table:
I (62) boot: ## Label            Usage          Type ST Offset   Length
I (69) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (76) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (84) boot:  2 factory          factory app      00 00 00010000 00100000
I (91) boot: End of partition table
I (95) boot_comm: chip revision: 3, min. application chip revision: 0
I (103) esp_image: segment 0: paddr=0x00010020 vaddr=0x3f400020 size=0x22960 (141664) map
I (166) esp_image: segment 1: paddr=0x00032988 vaddr=0x3ffb0000 size=0x0211c (  8476) load
I (169) esp_image: segment 2: paddr=0x00034aac vaddr=0x40080000 size=0x0a8f8 ( 43256) load
0x40080000: _WindowOverflow4 at /home/marc/esp/esp-idf_4_2/components/freertos/xtensa/xtensa_vectors.S:1730

I (191) esp_image: segment 3: paddr=0x0003f3ac vaddr=0x00000000 size=0x00c6c (  3180) 
I (193) esp_image: segment 4: paddr=0x00040020 vaddr=0x400d0020 size=0x45044 (282692) map
0x400d0020: _stext at ??:?

I (311) boot: Loaded app from partition at offset 0x10000
I (311) boot: Disabling RNG early entropy source...
I (312) cpu_start: Pro cpu up.
I (315) cpu_start: Application information:
I (320) cpu_start: Project name:     cpp-protobuf
I (325) cpu_start: App version:      8637ef8
I (330) cpu_start: Compile time:     Jun 17 2021 09:08:32
I (336) cpu_start: ELF file SHA256:  b6e12551fe450827...
I (342) cpu_start: ESP-IDF:          v4.2.1-2-g222cc54cf-dirty
I (349) cpu_start: Starting app cpu, entry point is 0x400817ec
0x400817ec: call_start_cpu1 at /home/marc/esp/esp-idf_4_2/components/esp32/cpu_start.c:287

I (0) cpu_start: App cpu up.
I (359) heap_init: Initializing. RAM available for dynamic allocation:
I (366) heap_init: At 3FFAE6E0 len 00001920 (6 KiB): DRAM
I (372) heap_init: At 3FFB40E8 len 0002BF18 (175 KiB): DRAM
I (379) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (385) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (391) heap_init: At 4008A8F8 len 00015708 (85 KiB): IRAM
I (398) cpu_start: Pro cpu start user code
I (420) spi_flash: detected chip: gd
I (420) spi_flash: flash io: dio
I (421) cpu_start: Starting scheduler on PRO CPU.
I (0) cpu_start: Starting scheduler on APP CPU.
I (486) Main: Serialized TestRequest (16 bytes)
I (486) Main: Deserialized: Hello World 0

I (1486) Main: Serialized TestRequest (18 bytes)
I (1486) Main: Deserialized: Hello World 1

I (2486) Main: Serialized TestRequest (18 bytes)
I (2486) Main: Deserialized: Hello World 2

I (3486) Main: Serialized TestRequest (18 bytes)
I (3486) Main: Deserialized: Hello World 3

I (4486) Main: Serialized TestRequest (18 bytes)
I (4486) Main: Deserialized: Hello World 4

I (5486) Main: Serialized TestRequest (18 bytes)
I (5486) Main: Deserialized: Hello World 5

```

