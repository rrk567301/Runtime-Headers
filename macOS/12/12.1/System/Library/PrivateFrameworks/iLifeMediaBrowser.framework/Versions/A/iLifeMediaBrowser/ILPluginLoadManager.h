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
- (BOOL)isUnloaded;
- (BOOL)needsReload;
- (void)setNeedsReload:(BOOL)a0;
- (int)loadState;
- (void)setLoadState:(int)a0;
- (BOOL)isLoadRequestPending;
- (void)setLoadRequestPending:(BOOL)a0;
- (void)setLoadDataCalled:(BOOL)a0;
- (void)setCancelLoadRequestPending:(BOOL)a0;
- (BOOL)isAutoReloadEnabled;
- (void)setAutoReloadEnabled:(BOOL)a0;
- (BOOL)isCancelLoadRequestPending;
- (BOOL)loadDataCalled;

@end
