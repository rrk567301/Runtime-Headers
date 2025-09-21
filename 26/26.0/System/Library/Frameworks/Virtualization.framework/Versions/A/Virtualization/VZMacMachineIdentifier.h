@class NSData, NSString, _VZMacSerialNumber;

@interface VZMacMachineIdentifier : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying> {
    unsigned long long _ECID;
    BOOL _disableECIDChecks;
    _VZMacSerialNumber *_serialNumber;
}

@property (readonly) unsigned long long _ECID;
@property (readonly) _VZMacSerialNumber *_serialNumber;
@property (readonly) BOOL _ECIDChecksDisabled;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_machineIdentifierForVirtualMachineClone;
+ (id)_machineIdentifierForVirtualMachineCloneWithECID:(unsigned long long)a0 serialNumber:(id)a1;
+ (id)_machineIdentifierForVirtualMachineCloneWithSerialNumber:(id)a0;
+ (id)_machineIdentifierWithECID:(unsigned long long)a0 serialNumber:(id)a1;
+ (id)_machineIdentifierWithSerialNumber:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;

@end
