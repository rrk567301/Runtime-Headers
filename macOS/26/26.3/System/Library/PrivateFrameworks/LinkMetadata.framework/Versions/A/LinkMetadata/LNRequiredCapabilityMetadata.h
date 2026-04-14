@class NSString;

@interface LNRequiredCapabilityMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL value;
@property (readonly, nonatomic, getter=isMobileGestaltCapability) BOOL mobileGestaltCapability;
@property (readonly, nonatomic, getter=isFeatureFlagCapability) BOOL featureFlagCapability;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 key:(id)a1 value:(BOOL)a2;

@end
