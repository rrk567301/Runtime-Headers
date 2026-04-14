@class NSString, NSUUID, NSData;

@interface _VZIOUSBHostPassthroughDeviceConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, _VZUSBDeviceConfigurationInternal, _VZUSBDeviceConfigurationSignature, NSCopying, VZUSBDeviceConfiguration> {
    struct IoService { unsigned int _object; } _io_service;
    struct CfPtr<const __CFDictionary *> { struct __CFDictionary *_object; } _device_properties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSUUID *uuid;
@property (readonly, nonatomic) NSData *signature;

+ (id)fromLocationID:(unsigned int)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)initWithService:(unsigned int)a0 error:(id *)a1;
- (BOOL)isDuplicateConfiguration:(id)a0;
- (id)makeUSBDeviceWithVirtualMachine:(id)a0;

@end
