@class NSString;

@interface LNRequiredCapabilityMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) char value;
@property (readonly, nonatomic, getter=isMobileGestaltCapability) char mobileGestaltCapability;
@property (readonly, nonatomic, getter=isFeatureFlagCapability) char featureFlagCapability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 key:(id)a1 value:(char)a2;

@end
