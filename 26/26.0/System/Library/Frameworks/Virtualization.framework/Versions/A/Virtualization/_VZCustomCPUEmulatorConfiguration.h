@class NSURL, NSString, NSNumber;

@interface _VZCustomCPUEmulatorConfiguration : _VZCPUEmulatorConfiguration {
    NSURL *_emulatorURL;
}

@property (copy) NSURL *emulatorURL;
@property (copy) NSString *options;
@property (copy) NSNumber *memorySize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct expected<VzCore::VirtualMachineConfiguration::CpuEmulator, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<VzCore::VirtualMachineConfiguration::CpuEmulator, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<VzCore::VirtualMachineConfiguration::CpuEmulator, NSError *>::__union_t> { union __union_t { struct CpuEmulator { int x0; struct optional<Base::FileDescriptor> { union { char x0; struct FileDescriptor { int x0; } x1; } x0; BOOL x1; } x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x2; struct optional<unsigned long long> { union { char x0; unsigned long long x1; } x0; BOOL x1; } x3; } x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })_cpuEmulator;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;

@end
