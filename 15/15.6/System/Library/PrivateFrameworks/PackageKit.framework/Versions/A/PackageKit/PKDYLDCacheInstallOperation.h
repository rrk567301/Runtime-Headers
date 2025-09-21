@class PKInstallTask;

@interface PKDYLDCacheInstallOperation : PKInstallOperation {
    PKInstallTask *_currentTask;
    char _inSandbox;
}

- (id)description;
- (int)installState;
- (void)cancel;
- (void)main;
- (id)_pathForTool:(id)a0;
- (char)_shouldUpdateDYLDSharedCache;
- (char)_updateDYLDSharedCacheInSandboxReturningError:(id *)a0;

@end
