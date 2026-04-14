@interface OSSystemExtensionActivationRequest : OSSystemExtensionRequest

- (void)failedWithError:(id)a0;
- (void)activatedWithResult:(long long)a0;
- (void)didConnectToDaemon;
- (void)needsUserApproval;
- (void)requestReplacementActionForExistingExtension:(id)a0 withExtension:(id)a1;
- (void)sendActivationRequest;

@end
