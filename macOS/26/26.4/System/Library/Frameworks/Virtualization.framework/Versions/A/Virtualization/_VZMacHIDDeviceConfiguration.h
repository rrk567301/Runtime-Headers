@class NSDictionary;

@interface _VZMacHIDDeviceConfiguration : _VZHIDDeviceConfiguration

@property (nonatomic) unsigned short vendorID;
@property (nonatomic) unsigned short productID;
@property (nonatomic) unsigned int usagePage;
@property (nonatomic) unsigned int usage;
@property (copy) NSDictionary *registryProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct AvpHidGenericDevice { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; struct CfPtr<const __CFDictionary *> { struct __CFDictionary *x0; } x4; })_hidDevice;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1 usagePage:(unsigned int)a2 usage:(unsigned int)a3;
- (id)makeHIDDeviceForVirtualMachine:(id)a0 hidDeviceIndex:(unsigned long long)a1;

@end
