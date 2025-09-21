@class NSObject, NSProgress;
@protocol OS_dispatch_queue;

@interface PXCPLSyncActivity : PXObservable {
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _syncProgressState;
    id _syncProgressSubscriber;
    NSProgress *_syncProgress;
}

@property (class, readonly) PXCPLSyncActivity *sharedInstance;

@property (readonly, nonatomic) BOOL isSyncing;

- (id)_init;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setIsSyncing:(BOOL)a0;
- (void)_queue_subscribeToSyncProgress;
- (void)_setSyncProgress:(id)a0;
- (void)_setSyncProgressState:(unsigned long long)a0;
- (void)_unsubscribeFromSyncProgress;
- (void)_updateIsSyncing;
- (void)_updateSyncProgressState;

@end
