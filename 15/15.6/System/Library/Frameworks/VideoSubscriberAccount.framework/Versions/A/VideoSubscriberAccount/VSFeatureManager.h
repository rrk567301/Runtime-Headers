@class VSPreferences;

@interface VSFeatureManager : NSObject

@property (retain, nonatomic) VSPreferences *preferences;

+ (id)sharedFeatureManager;

- (id)init;
- (void).cxx_destruct;
- (void)disableFeature:(id)a0;
- (void)enableFeature:(id)a0;
- (char)featureIsEnabled:(id)a0;
- (void)resetFeature:(id)a0;

@end
