@class WBTabGroupSyncAgentProxy, NSString, NSArray, WBSCRDTPositionGenerator, NSSet, NSMutableDictionary, NSObject, NSMutableSet, WBSavedStateManager, WBTabCollection, NSPointerArray;
@protocol WBTabProvider, OS_dispatch_queue;

@interface WBTabGroupManager : NSObject <WBSCRDTPositionGeneratorDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSPointerArray *_observers;
    WBSavedStateManager *_savedStateManager;
    WBTabGroupSyncAgentProxy *_syncAgentProxy;
    WBSCRDTPositionGenerator *_positionGenerator;
    NSMutableSet *_recentlyAddedTabGroupsAwaitingFirstStartPage;
    NSMutableSet *_removedTabGroups;
    NSMutableDictionary *_localTabsByUUID;
    NSMutableDictionary *_localTabGroupsByUUID;
    NSMutableDictionary *_syncableTabsByUUID;
    NSMutableDictionary *_syncableTabGroupsByUUID;
    BOOL _didFinishSetup;
    id /* block */ _setupCompletionHandler;
}

@property (readonly, nonatomic) WBTabCollection *tabCollection;
@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (readonly, nonatomic) id<WBTabProvider> tabProvider;
@property (readonly, copy, nonatomic) NSSet *recentlyAddedTabGroupsAwaitingFirstStartPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ephemeralTabGroupManager;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (id)deviceIdentifierForPositionGenerator:(id)a0;
- (id)positionGenerator:(id)a0 positionForRecordName:(id)a1;
- (id)positionGenerator:(id)a0 recordNameOfBookmarksAfterRecordWithName:(id)a1;
- (id)positionGenerator:(id)a0 recordNameOfBookmarksBeforeRecordWithName:(id)a1;
- (long long)nextChangeIDForPositionInPositionGenerator:(id)a0;
- (void)reloadTabGroupsFromDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)removeTabGroup:(id)a0;
- (void)removeTabGroupObserver:(id)a0;
- (void)tabGroupHasDisplayedStartPage:(id)a0;
- (void)updateScopedBookmarkWithUUID:(id)a0 title:(id)a1 address:(id)a2;
- (void)reorderScopedBookmarkWithUUID:(id)a0 afterBookmarkWithUUID:(id)a1 notify:(BOOL)a2;
- (id)updateTabGroupWithUUID:(id)a0 usingBlock:(id /* block */)a1;
- (id)updateTabWithUUID:(id)a0 persist:(BOOL)a1 notify:(BOOL)a2 usingBlock:(id /* block */)a3;
- (id)updateTabsInTabGroupWithUUID:(id)a0 usingBlock:(id /* block */)a1;
- (id)tabWithUUID:(id)a0;
- (void)moveTabGroup:(id)a0 afterTabGroup:(id)a1;
- (id)moveTabs:(id)a0 toTabGroup:(id)a1 afterTab:(id)a2;
- (void)deleteScopedBookmarkWithUUID:(id)a0;
- (void)addTabGroupObserver:(id)a0;
- (id)topScopedBookmarkListForTabGroup:(id)a0;
- (void)insertScopedBookmark:(id)a0 inScopedBookmarkFolderWithID:(int)a1 afterBookmarkWithUUID:(id)a2;
- (id)insertTabGroup:(id)a0 afterTabGroup:(id)a1;
- (void)recentlyAddedTabGroupIsAwaitingFirstStartPage:(id)a0;
- (void)registerWindowState:(id)a0;
- (id)_tabGroupWithUUID:(id)a0;
- (id)tabGroupWithUUID:(id)a0;
- (id)_tabGroups;
- (id)scopedBookmarkListWithID:(int)a0 filteredUsingString:(id)a1;
- (void)_tabGroupSyncDidFinish:(id)a0;
- (id)initWithTabProvider:(id)a0 savedStateManager:(id)a1;
- (void)waitForSetupWithCompletionHandler:(id /* block */)a0;
- (void)_reloadTabGroupsWithResultHandler:(id /* block */)a0;
- (id)_tabCacheForTabGroup:(id)a0;
- (id)_tabGroupCacheForTabGroup:(id)a0;
- (void)_cacheTabGroup:(id)a0;
- (void)_uncacheTabGroup:(id)a0;
- (id)_tabWithUUID:(id)a0;
- (long long)_nextInMemoryPositionChangeID;
- (id)_generatePositionAfterTabGroup:(id)a0;
- (void)_updatePositionsForTabsInTabGroup:(id)a0;
- (id)_localTabGroups;
- (void)deleteScopedBookmarkWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_notifyScopedBookmarkChangesInFolderWithID:(int)a0;
- (void)_didRemoveTabGroups:(id)a0 updateTabGroups:(id)a1;
- (void)notifyDidFinishSetup;
- (void)notifyDidUpdateTabGroups;
- (void)notifyDidRemoveTabGroup:(id)a0;
- (void)notifyWillReplaceTab:(id)a0 withNewTab:(id)a1;
- (void)notifyWillPerformBlockUpdatesForTabGroup:(id)a0;
- (void)notifyDidPerformBlockUpdatesForTabGroup:(id)a0;
- (void)notifyDidUpdateTabGroup:(id)a0;
- (void)notifyDidUpdateTabsInTabGroup:(id)a0;
- (void)notifyDidUpdateTab:(id)a0 userDriven:(BOOL)a1;
- (void)notifyDidUpdateSyncableContent;
- (void)notifyDidUpdateScopedBookmarkList:(id)a0;

@end
