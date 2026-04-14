@interface PKSetupDeferredInstallOperation : PKInstallOperation

- (void)main;
- (int)installState;
- (BOOL)_arrangeForDeferredInstallReturningError:(id *)a0;

@end
