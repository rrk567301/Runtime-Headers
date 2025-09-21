@interface OSIAIPostInstall : OSIInstallQueueElement

+ (id)extrasDirectoryWithPayloadDmgMountPoint:(id)a0;
+ (char)shouldBeRunWithPayloadDmgMountPoint:(id)a0;

- (id)operationName;
- (char)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;

@end
