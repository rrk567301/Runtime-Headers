@class PKInstallTask;

@interface PKDYLDCacheInstallOperation : PKInstallOperation {
    PKInstallTask *_currentTask;
    BOOL _inSandbox;
}

- (void)main;
- (void)cancel;
- (id)description;
- (int)installState;
- (id)_pathForTool:(id)a0;
- (BOOL)_shouldUpdateDYLDSharedCache;
- (BOOL)_updateDYLDSharedCacheInSandboxReturningError:(id *)a0;

@end
