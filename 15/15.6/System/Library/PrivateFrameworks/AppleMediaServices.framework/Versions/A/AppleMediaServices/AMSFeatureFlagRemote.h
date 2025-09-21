@interface AMSFeatureFlagRemote : AMSFeatureFlag

+ (id)fetchRemoteFlagState;

- (char)isRemote;
- (id)_preferencesKey;
- (void)_activateFlag;
- (long long)_developmentPhase;
- (void)_updateDevelopmentPhase;
- (void)_updateInternalEnabledState;

@end
