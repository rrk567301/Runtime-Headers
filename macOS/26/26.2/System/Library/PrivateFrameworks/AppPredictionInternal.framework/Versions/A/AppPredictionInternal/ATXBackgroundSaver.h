@class _PASLock, ATXSigtermListener, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBackgroundSaver : NSObject <ATXSigtermObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    _PASLock *_lock;
    ATXSigtermListener *_sigtermListener;
}

- (void)scheduleSaveImmediately;
- (void)_saveImmediatelyOnSigterm;
- (void).cxx_destruct;
- (void)_cancelSaveTimerWithLockWitness:(id)a0;
- (void)_cancelSaveTimer;
- (void)scheduleSave;
- (id)init;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void)handleSigterm;
- (void)dealloc;

@end
