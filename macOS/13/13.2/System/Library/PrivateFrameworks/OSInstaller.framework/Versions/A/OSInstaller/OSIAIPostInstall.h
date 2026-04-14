@interface OSIAIPostInstall : OSIInstallQueueElement

+ (BOOL)shouldBeRunWithPayloadDmgMountPoint:(id)a0;
+ (id)extrasDirectoryWithPayloadDmgMountPoint:(id)a0;

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;

@end
