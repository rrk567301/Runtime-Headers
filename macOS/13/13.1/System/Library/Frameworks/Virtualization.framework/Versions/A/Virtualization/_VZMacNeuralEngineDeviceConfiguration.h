@interface _VZMacNeuralEngineDeviceConfiguration : _VZAcceleratorDeviceConfiguration

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (struct AcceleratorDevice { int x0; })_acceleratorDevice;

@end
