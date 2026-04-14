@interface AXSSRemoteDesktop : NSObject

+ (id)getDebugNameForFeature:(unsigned long long)a0;
+ (id)getLocalizedNameForFeature:(unsigned long long)a0;
+ (BOOL)isFeaturePrivate:(unsigned long long)a0;
+ (BOOL)shouldSuggestFeatureIfEnabled:(unsigned long long)a0;

- (id)init;

@end
