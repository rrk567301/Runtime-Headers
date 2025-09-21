@interface CPLMomentShareFeature : CPLFeature

- (char)disableFeatureInStore:(id)a0 error:(id *)a1;
- (char)enableFeatureInStore:(id)a0 error:(id *)a1;
- (char)handleScopeWhenFeatureIsDisabled:(id)a0 scopeType:(long long)a1 store:(id)a2 error:(id *)a3;

@end
