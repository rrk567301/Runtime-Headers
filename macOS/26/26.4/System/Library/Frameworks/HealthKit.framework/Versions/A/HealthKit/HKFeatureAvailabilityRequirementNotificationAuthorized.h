@class NSString;

@interface HKFeatureAvailabilityRequirementNotificationAuthorized : HKFeatureAvailabilityBaseRequirement

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)requirementIdentifier;

- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)requiredEntitlements;
- (id)initWithCoder:(id)a0;
- (id)requirementDescription;

@end
