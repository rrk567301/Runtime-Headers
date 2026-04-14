@interface AMSFeatureFlagRemote : AMSFeatureFlag

+ (id)fetchRemoteFlagState;

- (BOOL)isRemote;
- (long long)_developmentPhase;
- (void)_updateDevelopmentPhase;
- (id)_preferencesKey;
- (void)_updateInternalEnabledState;
- (void)_activateFlag;

@end
