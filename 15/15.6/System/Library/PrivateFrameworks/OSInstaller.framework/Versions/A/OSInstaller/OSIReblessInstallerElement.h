@interface OSIReblessInstallerElement : OSIInstallQueueElement

- (id)operationName;
- (char)runReturningError:(id *)a0;
- (char)_runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;

@end
