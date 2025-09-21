@class NSDictionary;

@interface VUIFeatureManager : NSObject

@property (retain, nonatomic) NSDictionary *features;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (char)isFeatureEnabled:(id)a0;
- (id)availableFeatures;
- (id)_allFeatures;
- (id)osFeatureFlagsJSON;
- (void)setFeatureValue:(char)a0 forFeature:(id)a1;

@end
