@interface _VZPvPanicDeviceConfiguration : _VZPanicDeviceConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (struct expected<VzCore::VirtualMachineConfiguration::PanicDevice, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<VzCore::VirtualMachineConfiguration::PanicDevice, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<VzCore::VirtualMachineConfiguration::PanicDevice, NSError *>::__union_t> { union __union_t { struct PanicDevice { int x0; } x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })_panicDevice;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;

@end
