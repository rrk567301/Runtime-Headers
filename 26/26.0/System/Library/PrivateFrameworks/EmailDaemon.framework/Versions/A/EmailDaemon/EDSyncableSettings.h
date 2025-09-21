@class EFLocked, EFManualCancelationToken, NSUbiquitousKeyValueStore, NSUserDefaults;
@protocol EFAssertableScheduler;

@interface EDSyncableSettings : NSObject {
    EFManualCancelationToken *_cancelable;
    id<EFAssertableScheduler> _scheduler;
    NSUserDefaults *_defaults;
    NSUbiquitousKeyValueStore *_store;
    EFLocked *_changeActionsByKey;
}

@property (copy, nonatomic) id /* block */ proxyChangeHandler;

- (void)dealloc;
- (id)init;
- (void)_storeChangedExternally:(id)a0;
- (void).cxx_destruct;
- (void)beginSyncing;
- (id)initWithDefaults:(id)a0 store:(id)a1;
- (id)observeChangesForKey:(id)a0 cloudKey:(id)a1 conflictResolver:(id /* block */)a2;

@end
