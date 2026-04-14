@interface _VZUSBMouseConfiguration : VZPointingDeviceConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (int)_pointingDevice;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)makePointingDeviceForVirtualMachine:(id)a0 pointingDeviceIndex:(unsigned long long)a1;

@end
