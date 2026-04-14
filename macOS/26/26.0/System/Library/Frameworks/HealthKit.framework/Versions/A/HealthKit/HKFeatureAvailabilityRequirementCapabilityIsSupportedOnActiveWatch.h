@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveWatch : _HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice

@property (readonly, nonatomic) BOOL supportedOnLocalDevice;

+ (BOOL)supportsSecureCoding;
+ (id)requirementIdentifier;

- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (id)requiredEntitlements;
- (id)initWithFeatureIdentifier:(id)a0 supportedOnLocalDevice:(BOOL)a1;
- (id)requirementDescription;
- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
