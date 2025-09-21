@class NSString;

@interface NISpatialBrowsingConfiguration : NIConfiguration

@property long long updatesPolicy;
@property (getter=isResponder) char responder;
@property (copy) NSString *deviceIdentifier;
@property double maxNearbyObjectAge;

+ (id)new;
+ (char)supportsSecureCoding;
+ (id)responderConfigurationWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;

@end
