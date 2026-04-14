@interface AMSFeatureFlagRemote : AMSFeatureFlag

+ (id)fetchRemoteFlagState;

- (void)_updateDevelopmentPhase;
- (id)_preferencesKey;
- (void)_updateInternalEnabledState;
- (long long)_developmentPhase;
- (BOOL)isRemote;
- (void)_activateFlag;

@end
