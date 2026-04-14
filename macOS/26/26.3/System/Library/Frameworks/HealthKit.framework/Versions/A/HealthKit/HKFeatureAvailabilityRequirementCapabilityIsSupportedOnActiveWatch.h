@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveWatch : _HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice

@property (readonly, nonatomic) BOOL supportedOnLocalDevice;

+ (BOOL)supportsSecureCoding;
+ (id)requirementIdentifier;

- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (id)requiredEntitlements;
- (id)requirementDescription;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 supportedOnLocalDevice:(BOOL)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
