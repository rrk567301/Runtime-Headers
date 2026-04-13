@class PKInstallTask;

@interface PKXPCCacheInstallOperation : PKInstallOperation {
    PKInstallTask *_currentTask;
    BOOL _inSandbox;
}

- (id)description;
- (int)installState;
- (void)cancel;
- (void)main;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2 updateInSandbox:(BOOL)a3;
- (id)_pathForTool:(id)a0;
- (BOOL)_shouldRebuildXPCServiceCache;
- (BOOL)_triggerRebuildOfXPCServiceCacheOnNextRebootReturningError:(id *)a0;
- (BOOL)_rebuildXPCServiceCacheInSandboxReturningError:(id *)a0;

@end
