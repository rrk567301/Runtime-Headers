@class NSString;

@interface _VZHIDDeviceConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying>

@property (readonly) struct AvpHidGenericDevice { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; struct CfPtr<const __CFDictionary *> { struct __CFDictionary *x0; } x4; } _hidDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
