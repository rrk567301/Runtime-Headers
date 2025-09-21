@class NSString;

@interface HKFeatureAvailabilityRequirementFeatureIsOff : HKFeatureAvailabilityFeatureSettingBooleanRequirement <HKFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFeatureIdentifier:(id)a0 isOffWhenSettingIsAbsent:(char)a1;
- (id)initWithFeatureIdentifier:(id)a0 settingsOffKey:(id)a1 isOffWhenSettingIsAbsent:(char)a2;

@end
