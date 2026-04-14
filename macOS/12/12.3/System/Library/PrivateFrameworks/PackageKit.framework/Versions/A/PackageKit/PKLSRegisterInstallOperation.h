@interface PKLSRegisterInstallOperation : PKInstallOperation

+ (id)bundlePathToApplicationURL:(id)a0;
+ (BOOL)registerWithLaunchServices:(id)a0;

- (int)installState;
- (void)main;
- (BOOL)_registerLaunchServicesBundlesReturningError:(id *)a0;

@end
