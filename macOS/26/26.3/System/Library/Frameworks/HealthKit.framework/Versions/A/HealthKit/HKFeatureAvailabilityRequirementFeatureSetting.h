@class NSString;

@interface HKFeatureAvailabilityRequirementFeatureSetting : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) NSString *settingsOnKey;
@property (readonly, nonatomic) BOOL isOnWhenSettingIsAbsent;

- (id)initWithFeatureIdentifier:(id)a0 isOnWhenSettingIsAbsent:(BOOL)a1;
- (id)initWithFeatureIdentifier:(id)a0 settingsOnKey:(id)a1 isOnWhenSettingIsAbsent:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
