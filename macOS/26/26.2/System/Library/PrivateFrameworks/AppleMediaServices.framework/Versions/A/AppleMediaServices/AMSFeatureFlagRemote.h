@interface AMSFeatureFlagRemote : AMSFeatureFlag

+ (id)fetchRemoteFlagState;

- (void)_updateInternalEnabledState;
- (void)_updateDevelopmentPhase;
- (BOOL)isRemote;
- (id)_preferencesKey;
- (void)_activateFlag;
- (long long)_developmentPhase;

@end
