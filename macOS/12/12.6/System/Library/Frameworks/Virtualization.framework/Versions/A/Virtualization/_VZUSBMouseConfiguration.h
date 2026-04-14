@interface _VZUSBMouseConfiguration : VZPointingDeviceConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (struct expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)makePointingDeviceForVirtualMachine:(id)a0 pointingDeviceIndex:(unsigned long long)a1;
- (int)_pointingDevice;

@end
