@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsMapsSyncShortcutStorage : NSObject <MapsSync.MapsSyncStoreDelegate, MapsSuggestionsShortcutStorage> {
    id /* block */ _changeHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) NSArray *storeSubscriptionTypes;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)removeShortcuts:(id)a0 handler:(id /* block */)a1;
- (BOOL)moveShortcutToBack:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)storeDidChange:(id)a0;
- (BOOL)moveShortcutToFront:(id)a0 handler:(id /* block */)a1;
- (BOOL)moveShortcut:(id)a0 toIndex:(long long)a1 handler:(id /* block */)a2;
- (BOOL)addOrUpdateShortcuts:(id)a0 handler:(id /* block */)a1;
- (BOOL)loadAllShortcutsWithHandler:(id /* block */)a0;
- (void)setChangeHandler:(id /* block */)a0;
- (id)init;
- (BOOL)moveShortcut:(id)a0 beforeShortcut:(id)a1 handler:(id /* block */)a2;
- (BOOL)moveShortcut:(id)a0 afterShortcut:(id)a1 handler:(id /* block */)a2;

@end
