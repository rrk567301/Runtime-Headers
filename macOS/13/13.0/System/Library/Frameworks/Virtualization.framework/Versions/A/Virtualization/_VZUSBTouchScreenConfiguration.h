@interface _VZUSBTouchScreenConfiguration : _VZMultiTouchDeviceConfiguration

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (int)_multiTouchDevice;
- (id)makeMultiTouchDeviceForVirtualMachine:(id)a0 multiTouchDeviceIndex:(unsigned long long)a1;

@end
