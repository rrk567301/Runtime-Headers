@class NSString, NSUUID;

@interface HMMediaSystemData : HMMediaGroup <HMEProtoBufferCoding, NSSecureCoding>

@property (class, readonly, copy) NSString *codingKey;
@property (class, readonly, copy) NSString *defaultGroupName;
@property (class, readonly, copy) NSString *roomNameSentinel;
@property (class, readonly, copy) NSUUID *unknownDestinationSentinel;
@property (class, readonly) char supportsSecureCoding;

@property (copy) NSUUID *leftDestinationIdentifier;
@property (copy) NSUUID *rightDestinationIdentifier;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)destinationUniqueIdentifiers;
- (id)encodeToProtoBufferData;
- (char)hasRoleIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 parentIdentifier:(id)a1 name:(id)a2 defaultName:(char)a3 associatedGroupIdentifier:(id)a4 leftDestinationIdentifier:(id)a5 rightDestinationIdentifier:(id)a6;
- (id)initWithProtoBufferData:(id)a0;

@end
