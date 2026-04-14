@interface AMSFeatureFlagRemote : AMSFeatureFlag

+ (id)fetchRemoteFlagState;

- (BOOL)isRemote;
- (long long)_developmentPhase;
- (void)_updateDevelopmentPhase;
- (id)_preferencesKey;
- (void)_activateFlag;
- (void)_updateInternalEnabledState;

@end
