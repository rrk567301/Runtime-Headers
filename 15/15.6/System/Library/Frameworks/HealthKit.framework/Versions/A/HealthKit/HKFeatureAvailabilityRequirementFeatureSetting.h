@class NSString;

@interface HKFeatureAvailabilityRequirementFeatureSetting : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) NSString *settingsOnKey;
@property (readonly, nonatomic) char isOnWhenSettingIsAbsent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 isOnWhenSettingIsAbsent:(char)a1;
- (id)initWithFeatureIdentifier:(id)a0 settingsOnKey:(id)a1 isOnWhenSettingIsAbsent:(char)a2;

@end
