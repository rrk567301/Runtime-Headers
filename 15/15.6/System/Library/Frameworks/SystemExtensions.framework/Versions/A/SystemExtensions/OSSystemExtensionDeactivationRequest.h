@interface OSSystemExtensionDeactivationRequest : OSSystemExtensionRequest

- (void)didConnectToDaemon;
- (void)failedWithError:(id)a0;
- (char)makeAuthorization:(const struct AuthorizationOpaqueRef **)a0 form:(struct { char x0[32]; } *)a1 error:(id *)a2;
- (void)onceMoreWithFeeling:(id)a0;
- (char)requiresAuthorization:(id)a0;

@end
