@class NSMapTable, NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PXObservable : NSObject {
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    unsigned long long _currentChange;
    char _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    char _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
}

@property (readonly, nonatomic) char hasObservers;
@property (readonly, nonatomic) unsigned long long currentChanges;
@property (readonly, nonatomic) char shouldNotifyObserversAfterApplyingChangeBlocks;
@property (readonly, nonatomic) char isPerformingChanges;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long logContext;

- (id)init;
- (void).cxx_destruct;
- (void)_willChange;
- (void)performChanges:(id /* block */)a0;
- (void)_didChange;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)signalChange:(unsigned long long)a0;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)_publishChanges;
- (void)_applyPendingChanges;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_setHasObservers:(char)a0;
- (void)didPerformChanges;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (void)hasObserversDidChange;
- (id)mutableChangeObject;
- (void)willPerformChanges;
- (void)copyLogConfigurationFrom:(id)a0;
- (void)didEndChangeHandling;
- (void)didPublishChanges:(unsigned long long)a0;

@end
