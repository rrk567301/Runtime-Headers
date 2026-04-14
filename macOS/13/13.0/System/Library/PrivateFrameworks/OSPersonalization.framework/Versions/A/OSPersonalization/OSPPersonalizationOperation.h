@interface OSPPersonalizationOperation : OSPOperation

- (id)description;
- (void)main;
- (void)_personalize;
- (BOOL)_getAppleConnectSSOTicket;
- (int)_configurePersonalization:(struct __AMAuthInstall { } *)a0 entriesToPersonalize:(id)a1;
- (BOOL)_ensureInternalUseOnlyBuildForNonzeroBuildGroup;
- (BOOL)_copyBuildManifestToPersonalizedOutputDirectory;

@end
