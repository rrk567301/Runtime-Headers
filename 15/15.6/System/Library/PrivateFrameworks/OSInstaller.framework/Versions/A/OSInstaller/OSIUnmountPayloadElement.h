@interface OSIUnmountPayloadElement : OSIInstallQueueElement

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (char)runReturningError:(id *)a0;
- (char)_ejectDiskImageWithPath:(id)a0 withError:(id *)a1;
- (double)estimatedTimeToComplete;

@end
