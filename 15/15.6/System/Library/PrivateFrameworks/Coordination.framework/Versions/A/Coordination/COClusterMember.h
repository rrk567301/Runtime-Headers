@class NSDictionary, RPCompanionLinkDevice;

@interface COClusterMember : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isStale) char stale;
@property (readonly, copy, nonatomic) NSDictionary *deviceMetadata;
@property (retain, nonatomic) RPCompanionLinkDevice *device;
@property (readonly, nonatomic) unsigned long long memberType;

+ (id)memberForCurrentDevice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)homeKitIdentifier;
- (char)isEqualToMember:(id)a0;
- (id)IDSIdentifier;
- (id)initWithHomeKitIdentifier:(id)a0;
- (id)initWithType:(unsigned long long)a0 deviceMetadata:(id)a1;
- (char)isSameDeviceAsMember:(id)a0;
- (id)rapportDevice;

@end
