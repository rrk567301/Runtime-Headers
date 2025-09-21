@interface OSPPersonalizationOperation : OSPOperation

- (id)description;
- (void)main;
- (int)_configurePersonalization:(struct __AMAuthInstall { } *)a0 entriesToPersonalize:(id)a1;
- (char)_copyBuildManifestToPersonalizedOutputDirectory;
- (char)_ensureInternalUseOnlyBuildForNonzeroBuildGroup;
- (char)_getAppleConnectSSOTicket;
- (void)_personalize;

@end
