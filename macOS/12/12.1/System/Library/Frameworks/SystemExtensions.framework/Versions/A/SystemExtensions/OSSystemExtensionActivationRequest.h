@interface OSSystemExtensionActivationRequest : OSSystemExtensionRequest

- (void)requestReplacementActionForExistingExtension:(id)a0 withExtension:(id)a1;
- (void)needsUserApproval;
- (void)activatedWithResult:(long long)a0;
- (void)failedWithError:(id)a0;
- (void)didConnectToDaemon;
- (void)sendActivationRequest;

@end
