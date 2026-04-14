@interface OSIMSUCleanupElement : OSIInstallQueueElement

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (void)_removeCleanupInstallerPlist:(id)a0;

@end
