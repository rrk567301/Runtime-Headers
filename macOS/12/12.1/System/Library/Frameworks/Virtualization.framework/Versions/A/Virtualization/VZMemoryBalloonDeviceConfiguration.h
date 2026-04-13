@interface VZMemoryBalloonDeviceConfiguration : NSObject <NSCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (struct MemoryBalloonDevice { int x0; unsigned int x1; })_memoryBalloonDevice;
- (id)makeMemoryBalloonDeviceForVirtualMachine:(id)a0 maxTargetMemorySize:(unsigned long long)a1;

@end
