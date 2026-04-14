@interface VZVirtioTraditionalMemoryBalloonDeviceConfiguration : VZMemoryBalloonDeviceConfiguration {
    unsigned long long __targetVirtualMachineMemorySize;
}

- (id)init;
- (struct MemoryBalloonDevice { int x0; unsigned int x1; })_memoryBalloonDevice;
- (id)makeMemoryBalloonDeviceForVirtualMachine:(id)a0 maxTargetMemorySize:(unsigned long long)a1;

@end
