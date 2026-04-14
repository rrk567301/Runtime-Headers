@interface HKFeatureAvailabilityRequirementBloodOxygenCompanionAnalysisIsSupportedOnActiveWatch : _HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice

@property (readonly, nonatomic) BOOL capabilitySupportedOnLocalDevice;

+ (BOOL)supportsSecureCoding;
+ (id)requirementIdentifier;

- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)requiredEntitlements;
- (id)initWithCoder:(id)a0;
- (id)requirementDescription;
- (id)initWithCapabilitySupportedOnLocalDevice:(BOOL)a0;

@end
