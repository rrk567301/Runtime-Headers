@class NSDictionary;

@interface VUIFeatureManager : NSObject

@property (retain, nonatomic) NSDictionary *features;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFeatureEnabled:(id)a0;
- (id)_allFeatures;
- (id)osFeatureFlagsJSON;
- (id)availableFeatures;
- (void)setFeatureValue:(BOOL)a0 forFeature:(id)a1;
- (BOOL)isUnifiedMessagingFeatureOn;

@end
