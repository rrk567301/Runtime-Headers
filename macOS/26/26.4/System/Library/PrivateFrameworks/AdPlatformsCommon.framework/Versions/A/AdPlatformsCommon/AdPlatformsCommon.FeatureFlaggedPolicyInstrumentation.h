@interface AdPlatformsCommon.FeatureFlaggedPolicyInstrumentation : NSObject <APPolicyInstrumenting> {
    void /* unknown type, empty encoding */ featureFlag;
    void /* unknown type, empty encoding */ featureFlagDefinition;
    void /* unknown type, empty encoding */ cancellable;
    void /* unknown type, empty encoding */ implementationBacking;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)adFiltered:(id)a0 policyIdentifier:(long long)a1 policyReason:(long long)a2 secondaryReason:(id)a3;
- (BOOL)adImpressed:(id)a0 impressionType:(long long)a1;
- (BOOL)adPlaced:(id)a0;
- (BOOL)adReceived:(id)a0 contextId:(id)a1 storefront:(id)a2 adUnitId:(id)a3 rank:(long long)a4 placement:(long long)a5 queryString:(id)a6 locale:(id)a7;

@end
