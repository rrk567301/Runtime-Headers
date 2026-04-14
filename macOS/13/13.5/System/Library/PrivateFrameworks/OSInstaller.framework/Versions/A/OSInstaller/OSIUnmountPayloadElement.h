@interface OSIUnmountPayloadElement : OSIInstallQueueElement

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (BOOL)_ejectDiskImageWithPath:(id)a0 withError:(id *)a1;

@end
