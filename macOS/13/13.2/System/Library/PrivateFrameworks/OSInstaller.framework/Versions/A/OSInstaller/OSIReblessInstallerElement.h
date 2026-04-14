@interface OSIReblessInstallerElement : OSIInstallQueueElement

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (BOOL)_runReturningError:(id *)a0;

@end
