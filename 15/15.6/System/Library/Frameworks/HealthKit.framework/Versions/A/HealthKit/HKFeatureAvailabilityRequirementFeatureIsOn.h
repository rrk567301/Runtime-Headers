@class NSString;

@interface HKFeatureAvailabilityRequirementFeatureIsOn : HKFeatureAvailabilityFeatureSettingBooleanRequirement <HKFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFeatureIdentifier:(id)a0 isOnWhenSettingIsAbsent:(char)a1;
- (id)initWithFeatureIdentifier:(id)a0 settingsOnKey:(id)a1 isOnWhenSettingIsAbsent:(char)a2;

@end
