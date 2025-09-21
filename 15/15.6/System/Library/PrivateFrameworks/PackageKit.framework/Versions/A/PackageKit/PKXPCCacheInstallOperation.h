@class PKInstallTask;

@interface PKXPCCacheInstallOperation : PKInstallOperation {
    PKInstallTask *_currentTask;
    char _inSandbox;
}

- (id)description;
- (int)installState;
- (void)cancel;
- (void)main;
- (id)_pathForTool:(id)a0;
- (char)_rebuildXPCServiceCacheInSandboxReturningError:(id *)a0;
- (char)_shouldRebuildXPCServiceCache;
- (char)_triggerRebuildOfXPCServiceCacheOnNextRebootReturningError:(id *)a0;

@end
