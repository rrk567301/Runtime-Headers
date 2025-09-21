@class PKInstallTask;

@interface PKXPCCacheInstallOperation : PKInstallOperation {
    PKInstallTask *_currentTask;
    BOOL _inSandbox;
}

- (void)main;
- (void)cancel;
- (id)description;
- (int)installState;
- (id)_pathForTool:(id)a0;
- (BOOL)_rebuildXPCServiceCacheInSandboxReturningError:(id *)a0;
- (BOOL)_shouldRebuildXPCServiceCache;
- (BOOL)_triggerRebuildOfXPCServiceCacheOnNextRebootReturningError:(id *)a0;

@end
