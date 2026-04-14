@class PKInstallTask;

@interface PKDYLDCacheInstallOperation : PKInstallOperation {
    PKInstallTask *_currentTask;
    BOOL _inSandbox;
}

- (void)cancel;
- (id)description;
- (void)main;
- (int)installState;
- (id)_pathForTool:(id)a0;
- (BOOL)_shouldUpdateDYLDSharedCache;
- (BOOL)_updateDYLDSharedCacheInSandboxReturningError:(id *)a0;

@end
