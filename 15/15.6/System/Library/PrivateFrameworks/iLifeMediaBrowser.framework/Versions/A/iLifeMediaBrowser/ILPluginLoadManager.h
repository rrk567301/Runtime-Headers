@class NSLock;

@interface ILPluginLoadManager : NSObject {
    NSLock *_stateLock;
    int _loadState;
    char _loadRequestPending;
    char _cancelLoadRequestPending;
    char _autoReloadEnabled;
    char _needsReload;
    char _loadDataCalled;
}

- (id)init;
- (char)isLoaded;
- (char)isLoading;
- (int)loadState;
- (char)isUnloaded;
- (void)setNeedsReload:(char)a0;
- (char)needsReload;
- (char)isAutoReloadEnabled;
- (char)isCancelLoadRequestPending;
- (char)isLoadRequestPending;
- (char)loadDataCalled;
- (void)setAutoReloadEnabled:(char)a0;
- (void)setCancelLoadRequestPending:(char)a0;
- (void)setLoadDataCalled:(char)a0;
- (void)setLoadRequestPending:(char)a0;
- (void)setLoadState:(int)a0;

@end
