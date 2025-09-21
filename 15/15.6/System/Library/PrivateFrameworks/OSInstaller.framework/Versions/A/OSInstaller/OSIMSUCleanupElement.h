@interface OSIMSUCleanupElement : OSIInstallQueueElement

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (char)runReturningError:(id *)a0;
- (void)_removeCleanupInstallerPlist:(id)a0;
- (double)estimatedTimeToComplete;

@end
