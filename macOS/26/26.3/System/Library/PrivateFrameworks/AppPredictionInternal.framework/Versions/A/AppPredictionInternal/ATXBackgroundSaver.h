@class _PASLock, ATXSigtermListener, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBackgroundSaver : NSObject <ATXSigtermObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    _PASLock *_lock;
    ATXSigtermListener *_sigtermListener;
}

- (void)scheduleSaveImmediately;
- (void)scheduleSave;
- (id)init;
- (void)handleSigterm;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_cancelSaveTimer;
- (void)dealloc;
- (void)_saveImmediatelyOnSigterm;
- (void)_cancelSaveTimerWithLockWitness:(id)a0;

@end
