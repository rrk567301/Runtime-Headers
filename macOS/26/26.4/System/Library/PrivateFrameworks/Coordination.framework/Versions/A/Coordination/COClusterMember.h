@class NSDictionary, RPCompanionLinkDevice;

@interface COClusterMember : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isStale) BOOL stale;
@property (readonly, copy, nonatomic) NSDictionary *deviceMetadata;
@property (retain, nonatomic) RPCompanionLinkDevice *device;
@property (readonly, nonatomic) unsigned long long memberType;

+ (id)memberForCurrentDevice;

- (id)homeKitIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToMember:(id)a0;
- (id)IDSIdentifier;
- (id)initWithHomeKitIdentifier:(id)a0;
- (id)initWithType:(unsigned long long)a0 deviceMetadata:(id)a1;
- (BOOL)isSameDeviceAsMember:(id)a0;
- (id)rapportDevice;

@end
