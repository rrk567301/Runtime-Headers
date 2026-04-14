@interface VZVirtioTraditionalMemoryBalloonDeviceConfiguration : VZMemoryBalloonDeviceConfiguration {
    unsigned long long __targetVirtualMachineMemorySize;
}

- (id)init;
- (struct MemoryBalloonDevice { int x0; unsigned int x1; })_memoryBalloonDevice;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)makeMemoryBalloonDeviceForVirtualMachine:(id)a0 memoryBalloonDeviceIndex:(unsigned long long)a1 maxTargetMemorySize:(unsigned long long)a2;

@end
