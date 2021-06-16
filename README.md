# Protobuf c++ component for esp32

This is an example project for the esp32 with protobuf v3.15.2 as c++ component.



## Requirements

- [ESP-IDF 4.2.1](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/)

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

Currently the whole project will not compile with ESP-IDF 4.2.1 because an error which occurs during the generation of the binary:

```
A fatal error occurred: Contents of segment at SHA256 digest offset 0xb0 are not all zero. Refusing to overwrite.
```

However, if lines 2056 - 2058 of esp-idf/components/esptool_py/esptool/esptool.py are commented out, the binary is generated and upon flashing will cause this output:

```
rst:0x1 (POWERON_RESET),boot:0x13 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:2
load:0x3fff0030,len:4
load:0x3fff0034,len:7104
ho 0 tail 12 room 4
load:0x40078000,len:13212
load:0x40080400,len:4568
0x40080400: _init at ??:?

entry 0x400806f4
I (31) boot: ESP-IDF v4.2.1-dirty 2nd stage bootloader
I (31) boot: compile time 19:13:29
I (31) boot: chip revision: 3
I (34) boot_comm: chip revision: 3, min. bootloader chip revision: 0
I (42) boot.esp32: SPI Speed      : 40MHz
I (46) boot.esp32: SPI Mode       : DIO
I (51) boot.esp32: SPI Flash Size : 8MB
I (55) boot: Enabling RNG early entropy source...
I (61) boot: Partition Table:
I (64) boot: ## Label            Usage          Type ST Offset   Length
I (72) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (79) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (86) boot:  2 factory          factory app      00 00 00010000 00100000
I (94) boot: End of partition table
I (98) boot_comm: chip revision: 3, min. application chip revision: 0
I (105) esp_image: segment 0: paddr=0x00010020 vaddr=0x3ffb0000 size=0x0211c (  8476) load
I (118) esp_image: segment 1: paddr=0x00012144 vaddr=0x40080000 size=0x00404 (  1028) load
0x40080000: _WindowOverflow4 at /home/marc/esp/esp-idf_4_2/components/freertos/xtensa/xtensa_vectors.S:1730

I (124) esp_image: segment 2: paddr=0x00012550 vaddr=0x40080404 size=0x0a4e4 ( 42212) load
I (151) esp_image: segment 3: paddr=0x0001ca3c vaddr=0x00000000 size=0x035fc ( 13820) 
I (156) esp_image: segment 4: paddr=0x00020040 vaddr=0x3f400040 size=0x22940 (141632) map
I (211) esp_image: segment 5: paddr=0x00042988 vaddr=0x00000000 size=0x0d690 ( 54928) 
I (232) esp_image: segment 6: paddr=0x00050020 vaddr=0x400d0020 size=0x45044 (282692) map
0x400d0020: _stext at ??:?

I (346) boot: Loaded app from partition at offset 0x10000
I (346) boot: Disabling RNG early entropy source...
I (346) cpu_start: Pro cpu up.
I (350) cpu_start: Application information:
I (355) cpu_start: Project name:     cpp-protobuf
I (360) cpu_start: App version:      1
I (365) cpu_start: Compile time:     Jun 16 2021 19:13:25
I (371) cpu_start: ELF file SHA256:  0000000000000000...
I (377) cpu_start: ESP-IDF:          v4.2.1-dirty
I (382) cpu_start: Starting app cpu, entry point is 0x400817e8
0x400817e8: call_start_cpu1 at /home/marc/esp/esp-idf_4_2/components/esp32/cpu_start.c:287

I (0) cpu_start: App cpu up.
I (392) heap_init: Initializing. RAM available for dynamic allocation:
I (399) heap_init: At 3FFAE6E0 len 00001920 (6 KiB): DRAM
I (405) heap_init: At 3FFB40E8 len 0002BF18 (175 KiB): DRAM
I (412) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (418) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (424) heap_init: At 4008A8E8 len 00015718 (85 KiB): IRAM
I (431) cpu_start: Pro cpu start user code
I (453) spi_flash: detected chip: gd
I (453) spi_flash: flash io: dio
I (453) cpu_start: Starting scheduler on PRO CPU.
I (0) cpu_start: Starting scheduler on APP CPU.
I (519) Main: Serialized TestRequest (16 bytes)
I (519) Main: Deserialized: Hello World 0

I (1519) Main: Serialized TestRequest (18 bytes)
I (1519) Main: Deserialized: Hello World 1

I (2519) Main: Serialized TestRequest (18 bytes)
I (2519) Main: Deserialized: Hello World 2

I (3519) Main: Serialized TestRequest (18 bytes)
I (3519) Main: Deserialized: Hello World 3

I (4519) Main: Serialized TestRequest (18 bytes)
I (4519) Main: Deserialized: Hello World 4
```

