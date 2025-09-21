@interface PKSetupDeferredInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (char)_arrangeForDeferredInstallReturningError:(id *)a0;

@end
