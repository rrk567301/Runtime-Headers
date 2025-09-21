@interface PKLSRegisterInstallOperation : PKInstallOperation

- (void)main;
- (int)installState;
- (BOOL)_registerLaunchServicesBundlesReturningError:(id *)a0;

@end
