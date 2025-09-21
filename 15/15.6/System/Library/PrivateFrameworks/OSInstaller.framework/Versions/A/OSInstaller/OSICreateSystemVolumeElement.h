@interface OSICreateSystemVolumeElement : OSIInstallQueueElement

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (char)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (char)fixVolumeGroupUUIDWithError:(id *)a0;

@end
