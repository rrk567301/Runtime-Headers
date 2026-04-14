@class NSString;

@interface HKFeatureAvailabilityFeatureSettingBooleanRequirement : HKFeatureAvailabilityOnboardingRecordRequirement

@property (readonly, copy, nonatomic) NSString *settingsKey;
@property (readonly, nonatomic) BOOL settingsValue;
@property (readonly, nonatomic) BOOL isSatisfiedWhenSettingIsAbsent;

+ (BOOL)supportsSecureCoding;

- (id)isSatisfiedWithOnboardingRecord:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (id)initWithFeatureIdentifier:(id)a0 settingsKey:(id)a1 settingsValue:(BOOL)a2 isSatisfiedWhenSettingIsAbsent:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
