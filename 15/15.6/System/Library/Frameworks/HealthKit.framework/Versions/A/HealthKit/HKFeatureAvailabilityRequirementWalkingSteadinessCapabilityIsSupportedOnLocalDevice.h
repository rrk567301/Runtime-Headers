@class NSString;

@interface HKFeatureAvailabilityRequirementWalkingSteadinessCapabilityIsSupportedOnLocalDevice : HKFeatureAvailabilityMustBeTrueRequirement <HKFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)init;

@end
