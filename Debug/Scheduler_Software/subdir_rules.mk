################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
Scheduler_Software/%.o: ../Scheduler_Software/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/bin/tiarmclang.exe" -c @"device.opt"  -march=thumbv6m -mcpu=cortex-m0plus -mfloat-abi=soft -mlittle-endian -mthumb -O2 -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507/Scheduler_Software" -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507" -I"D:/Swapnil/TI_DRIVER_DEVELOPEMENT_MSPM0G3507_CCS_12.8.1/Scheduler/Scheduler_MSPM0G3507/Debug" -I"C:/ti/mspm0_sdk_2_11_00_07/source/third_party/CMSIS/Core/Include" -I"C:/ti/mspm0_sdk_2_11_00_07/source" -g -Wall -MMD -MP -MF"Scheduler_Software/$(basename $(<F)).d_raw" -MT"$(@)"  $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


