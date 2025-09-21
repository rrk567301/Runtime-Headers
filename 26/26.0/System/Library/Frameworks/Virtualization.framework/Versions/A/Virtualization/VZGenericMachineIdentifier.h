@class NSData, NSString;

@interface VZGenericMachineIdentifier : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying> {
    struct Uuid { unsigned char _uuid[16]; } _uuid;
}

@property (readonly, copy) NSData *dataRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)init;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;

@end
