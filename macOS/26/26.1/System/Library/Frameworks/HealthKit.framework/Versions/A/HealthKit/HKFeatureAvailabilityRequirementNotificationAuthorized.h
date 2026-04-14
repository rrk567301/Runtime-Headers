@class NSString;

@interface HKFeatureAvailabilityRequirementNotificationAuthorized : HKFeatureAvailabilityBaseRequirement

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)initWithBundleIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)requiredEntitlements;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;

@end
