################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
build-620954273: ../Scheduler_MSPM0G3507.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"C:/ti/sysconfig_1.26.2/sysconfig_cli.bat" --script "D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507/Scheduler_MSPM0G3507.syscfg" -o "." -s "C:/ti/mspm0_sdk_2_11_00_07/.metadata/product.json" --compiler ticlang
	@echo 'Finished building: "$<"'
	@echo ' '

device_linker.cmd: build-620954273 ../Scheduler_MSPM0G3507.syscfg
device.opt: build-620954273
device.cmd.genlibs: build-620954273
ti_msp_dl_config.c: build-620954273
ti_msp_dl_config.h: build-620954273
Event.dot: build-620954273

%.o: ./%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/bin/tiarmclang.exe" -c @"device.opt"  -march=thumbv6m -mcpu=cortex-m0plus -mfloat-abi=soft -mlittle-endian -mthumb -O2 -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507/Scheduler_Software" -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507" -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507/Debug" -I"C:/ti/mspm0_sdk_2_11_00_07/source/third_party/CMSIS/Core/Include" -I"C:/ti/mspm0_sdk_2_11_00_07/source" -g -Wall -MMD -MP -MF"$(basename $(<F)).d_raw" -MT"$(@)"  $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

startup_mspm0g350x_ticlang.o: C:/ti/mspm0_sdk_2_11_00_07/source/ti/devices/msp/m0p/startup_system_files/ticlang/startup_mspm0g350x_ticlang.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/bin/tiarmclang.exe" -c @"device.opt"  -march=thumbv6m -mcpu=cortex-m0plus -mfloat-abi=soft -mlittle-endian -mthumb -O2 -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507/Scheduler_Software" -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507" -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507/Debug" -I"C:/ti/mspm0_sdk_2_11_00_07/source/third_party/CMSIS/Core/Include" -I"C:/ti/mspm0_sdk_2_11_00_07/source" -g -Wall -MMD -MP -MF"$(basename $(<F)).d_raw" -MT"$(@)"  $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

%.o: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/bin/tiarmclang.exe" -c @"device.opt"  -march=thumbv6m -mcpu=cortex-m0plus -mfloat-abi=soft -mlittle-endian -mthumb -O2 -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507/Scheduler_Software" -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507" -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507/Debug" -I"C:/ti/mspm0_sdk_2_11_00_07/source/third_party/CMSIS/Core/Include" -I"C:/ti/mspm0_sdk_2_11_00_07/source" -g -Wall -MMD -MP -MF"$(basename $(<F)).d_raw" -MT"$(@)"  $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


