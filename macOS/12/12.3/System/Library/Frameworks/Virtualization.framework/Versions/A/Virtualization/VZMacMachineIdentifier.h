@class NSData, NSString;

@interface VZMacMachineIdentifier : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying> {
    unsigned long long _ECID;
    BOOL _disableECIDChecks;
}

@property (readonly) unsigned long long _ECID;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_machineIdentifierWithECID:(unsigned long long)a0;
+ (id)_machineIdentifierForVirtualMachineClone;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithDataRepresentation:(id)a0;
- (struct expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
