@class VSPreferences;

@interface VSFeatureManager : NSObject

@property (retain, nonatomic) VSPreferences *preferences;

+ (id)sharedFeatureManager;

- (void)enableFeature:(id)a0;
- (void)disableFeature:(id)a0;
- (id)init;
- (void)resetFeature:(id)a0;
- (void).cxx_destruct;
- (BOOL)featureIsEnabled:(id)a0;

@end
