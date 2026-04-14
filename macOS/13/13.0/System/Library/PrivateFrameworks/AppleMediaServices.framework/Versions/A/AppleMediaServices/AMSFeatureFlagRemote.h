@interface AMSFeatureFlagRemote : AMSFeatureFlag

+ (id)fetchRemoteFlagState;

- (BOOL)isRemote;
- (void)_activateFlag;
- (void)_updateInternalEnabledState;
- (void)_updateDevelopmentPhase;
- (long long)_developmentPhase;
- (id)_preferencesKey;

@end
