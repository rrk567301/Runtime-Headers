@interface OSPPersonalizationOperation : OSPOperation

- (id)description;
- (void)main;
- (void)_personalize;
- (BOOL)_getAppleConnectSSOTicket;
- (BOOL)_ensureInternalUseOnlyBuildForNonzeroBuildGroup;
- (int)_configurePersonalization:(struct __AMAuthInstall { } *)a0;

@end
