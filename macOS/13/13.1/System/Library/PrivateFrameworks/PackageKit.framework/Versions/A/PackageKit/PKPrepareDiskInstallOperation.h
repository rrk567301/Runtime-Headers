@interface PKPrepareDiskInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (unsigned long long)_currentSpaceDeficit;
- (BOOL)ensureAppleInternalExistsOnDestination;

@end
