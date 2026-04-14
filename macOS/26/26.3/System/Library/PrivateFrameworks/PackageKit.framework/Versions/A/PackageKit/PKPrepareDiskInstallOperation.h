@interface PKPrepareDiskInstallOperation : PKInstallOperation

- (void)main;
- (int)installState;
- (unsigned long long)_currentSpaceDeficit;
- (BOOL)ensureAppleInternalExistsOnDestination;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;

@end
