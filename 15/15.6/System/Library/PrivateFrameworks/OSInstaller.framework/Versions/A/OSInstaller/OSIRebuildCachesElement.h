@interface OSIRebuildCachesElement : OSIInstallQueueElement {
    unsigned long long operatingMode;
}

- (id)operationName;
- (char)runReturningError:(id *)a0;
- (char)_triggerRebuildOfXPCServiceCacheOnNextRebootReturningError:(id *)a0;
- (id)localizedStatusString;
- (char)_migrateMasterBOMReturningError:(id *)a0;
- (char)_triggerRebuildOfDYLDSharedCacheReturningError:(id *)a0;
- (char)_triggerRebuildOfKernelCache:(id *)a0;
- (double)estimatedTimeToComplete;
- (id)initWithOptions:(id)a0 withMode:(unsigned long long)a1;

@end
