@class PKInstallTask;

@interface PKDYLDCacheInstallOperation : PKInstallOperation {
    PKInstallTask *_currentTask;
    BOOL _inSandbox;
}

+ (BOOL)canBackgroundForCurrentSystemState;
+ (long long)expectedInstallPhaseForRequest:(id)a0 analyzer:(id)a1;

- (id)description;
- (int)installState;
- (void)cancel;
- (void)main;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2 updateInSandbox:(BOOL)a3;
- (BOOL)_shouldUpdateDYLDSharedCache;
- (id)_pathForTool:(id)a0;
- (BOOL)_updateDYLDSharedCacheInSandboxReturningError:(id *)a0;

@end
