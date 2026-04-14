@class NSString;

@interface HMHomeTheaterSystem : HMMediaGroup

@property (copy) NSString *audioDestinationIdentifier;
@property long long audioDestinationType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)destinationIdentifiers;
- (id)destinationUniqueIdentifiers;
- (id)encodeToProtoBufferData;
- (id)initWithIdentifier:(id)a0 parentIdentifier:(id)a1 name:(id)a2 audioDestinationIdentifier:(id)a3 audioDestinationType:(long long)a4;
- (id)initWithProtoBufferData:(id)a0;

@end
