@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask {
    char _deferredCancel;
}

@property (class, nonatomic) char dontAutoRetry;

@property (nonatomic) char highPriority;

- (void)cancel:(char)a0;
- (id)taskIdentifier;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (id)enumerateScopesForTaskInTransaction:(id)a0;
- (id)newScopedTaskWithScope:(id)a0 session:(id)a1 transportScope:(id)a2 clientCacheIdentifier:(id)a3;
- (id)scopeFilterInTransaction:(id)a0;
- (char)shouldSkipScopesWithMissingTransportScope;
- (void)taskDidFinishWithError:(id)a0;

@end
