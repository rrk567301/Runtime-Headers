@class _PASLock, ATXSigtermListener, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBackgroundSaver : NSObject <ATXSigtermObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    _PASLock *_lock;
    ATXSigtermListener *_sigtermListener;
}

- (void)_saveImmediatelyOnSigterm;
- (void)handleSigterm;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void)scheduleSave;
- (void).cxx_destruct;
- (void)_cancelSaveTimerWithLockWitness:(id)a0;
- (id)init;
- (void)_cancelSaveTimer;
- (void)dealloc;
- (void)scheduleSaveImmediately;

@end
