@class NSString;

@interface AuRA_DevicePriv : AuRA_ClockPriv <AuRA_Device>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(struct weak_ptr<aura::Device> { struct Device *x0; struct __shared_weak_count *x1; })a0;
- (id)ports;
- (unsigned int)inputSafetyOffset;
- (unsigned int)outputSafetyOffset;
- (id)streams;
- (id)fakeDeviceDescription;

@end
