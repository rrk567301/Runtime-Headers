@interface CPLFeature : NSObject

+ (id)featureWithName:(id)a0;

- (char)disableFeatureInStore:(id)a0 error:(id *)a1;
- (char)enableFeatureInStore:(id)a0 error:(id *)a1;
- (char)handleScopeWhenFeatureIsDisabled:(id)a0 scopeType:(long long)a1 store:(id)a2 error:(id *)a3;
- (char)shouldDisableScopeWhenFeatureIsDisabled:(id)a0;

@end
