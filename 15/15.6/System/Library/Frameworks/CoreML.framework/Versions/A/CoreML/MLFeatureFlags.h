@class NSUserDefaults, NSMutableDictionary;

@interface MLFeatureFlags : NSObject

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSMutableDictionary *flags;
@property (readonly, nonatomic) NSMutableDictionary *overrideOriginalValues;

+ (id)sharedFeatureFlags;

- (id)init;
- (void).cxx_destruct;
- (void)addFeature:(id)a0 withControlName:(id)a1 defaultValue:(char)a2;
- (id)controlKeyForFeature:(id)a0;
- (void)defineFeatures;
- (char)isFeatureEnabled:(id)a0;
- (char)isMPSGraphEnabled;
- (char)isMPSGraphFP16Enabled;
- (char)removeOverrideForFeature:(id)a0;
- (char)setOverride:(char)a0 forFeature:(id)a1;

@end
