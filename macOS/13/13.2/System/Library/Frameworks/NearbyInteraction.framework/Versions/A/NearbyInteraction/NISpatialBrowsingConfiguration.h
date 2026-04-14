@class NSString;

@interface NISpatialBrowsingConfiguration : NIConfiguration

@property long long updatesPolicy;
@property (getter=isResponder) BOOL responder;
@property (copy) NSString *deviceIdentifier;
@property double maxNearbyObjectAge;

+ (id)new;
+ (BOOL)supportsSecureCoding;
+ (id)responderConfigurationWithIdentifier:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)descriptionInternal;

@end
