@class NSLock;

@interface ILPluginLoadManager : NSObject {
    NSLock *_stateLock;
    int _loadState;
    BOOL _loadRequestPending;
    BOOL _cancelLoadRequestPending;
    BOOL _autoReloadEnabled;
    BOOL _needsReload;
    BOOL _loadDataCalled;
}

- (id)init;
- (BOOL)isLoaded;
- (BOOL)isLoading;
- (int)loadState;
- (BOOL)isUnloaded;
- (void)setNeedsReload:(BOOL)a0;
- (BOOL)needsReload;
- (void)setAutoReloadEnabled:(BOOL)a0;
- (BOOL)isAutoReloadEnabled;
- (BOOL)isCancelLoadRequestPending;
- (void)setLoadState:(int)a0;
- (BOOL)isLoadRequestPending;
- (void)setLoadRequestPending:(BOOL)a0;
- (void)setCancelLoadRequestPending:(BOOL)a0;
- (BOOL)loadDataCalled;
- (void)setLoadDataCalled:(BOOL)a0;

@end
