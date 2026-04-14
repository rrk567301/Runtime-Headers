@class NSObject, NSArray, NSPointerArray, NSMutableArray, WBSavedStateManager;
@protocol WBTabProvider, OS_dispatch_queue;

@interface WBTabGroupManager : NSObject {
    NSMutableArray *_groups;
    NSMutableArray *_tabGroupStatesGenerations;
    NSMutableArray *_tabStatesGenerations;
    NSMutableArray *_closedTabUUIDsGenerations;
    NSPointerArray *_observers;
    WBSavedStateManager *_savedStateManager;
    NSObject<OS_dispatch_queue> *_tabProviderAccessQueue;
}

@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (readonly, nonatomic) id<WBTabProvider> tabProvider;

- (void).cxx_destruct;
- (void)updateTabsInTabGroup:(id)a0;
- (void)saveTab:(id)a0;
- (id)initWithTabProvider:(id)a0 savedStateManager:(id)a1;
- (void)addTabGroupObserver:(id)a0;
- (void)saveTabGroup:(id)a0;
- (void)removeTabGroup:(id)a0;
- (void)insertTabGroup:(id)a0 afterTabGroup:(id)a1;
- (void)removeTabGroupObserver:(id)a0;
- (void)moveTabGroup:(id)a0 afterTabGroup:(id)a1;
- (void)_reloadTabGroupsFromDatabase;
- (void)_readTabGroups;
- (void)_tabGroupSyncDidFinish:(id)a0;
- (void)_didUpdateTabGroups:(id)a0;
- (void)notifyDidFinishSetup;
- (void)notifyDidUpdateTabGroups;
- (void)notifyDidRemoveTabGroup:(id)a0;
- (void)notifyDidUpdateTabGroup:(id)a0;
- (void)_addKnownStateForTab:(id)a0;
- (void)notifyDidUpdateTab:(id)a0 userDriven:(BOOL)a1;
- (void)notifyDidUpdateTabsInTabGroup:(id)a0;
- (void)_compareInMemoryTabGroups:(id)a0 knownTabStates:(id)a1 withTabGroups:(id)a2;

@end
