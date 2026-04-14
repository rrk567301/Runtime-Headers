@class NSArray, NSString, WBTabCollection, WBBrowserState;

@interface WBReadonlyTabCollection : NSObject <WBStateProvider> {
    WBTabCollection *_collection;
}

@property (readonly, copy, nonatomic) NSArray *profiles;
@property (readonly, nonatomic, getter=hasCompletedMigration) BOOL completedMigration;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) WBBrowserState *browserState;
@property (readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
@property (readonly, copy, nonatomic) NSArray *windowStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *namedTabGroupsInDefaultProfile;
@property (readonly, copy, nonatomic) NSArray *allNamedTabGroupsUnsorted;
@property (readonly, nonatomic) int pinnedTabsFolderID;
@property (readonly, nonatomic) int privatePinnedTabsFolderID;
@property (nonatomic) unsigned long long maximumTabsPerGroup;

- (id)devicesForProfile:(id)a0;
- (id)windowStateWithUUID:(id)a0;
- (id)tabCollectionDataSummaryLogHidingSensitiveData:(BOOL)a0;
- (id)tabsForTabGroup:(id)a0;
- (void)waitForPendingChanges;
- (id)namedTabGroupsForProfileWithIdentifier:(id)a0;
- (id)init;
- (BOOL)copyTabsDatabase:(id)a0 hidingSensitiveData:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)tabGroupWithUUID:(id)a0;
- (void)disableSuddenTerminationForPendingChanges;
- (id)tabWithUUID:(id)a0;

@end
