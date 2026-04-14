@class EFDebouncer, NSHashTable;
@protocol EFAssertableScheduler;

@interface EDVisibleMessagesReloadRegistry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_observers;
    id<EFAssertableScheduler> _observationScheduler;
    EFDebouncer *_reloadDebouncer;
    int _notifyToken;
}

+ (id)log;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_reloadVisibleMessages;
- (void)_scheduleVisibleMessageReload;
- (id)addVisibleMessagesObserver:(id)a0;

@end
