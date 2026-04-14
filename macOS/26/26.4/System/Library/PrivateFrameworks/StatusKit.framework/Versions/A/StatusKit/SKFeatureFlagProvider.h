@interface SKFeatureFlagProvider : NSObject <SKFeatureFlagProviding>

+ (id)logger;

- (BOOL)isFeatureEnabled:(long long)a0;

@end
