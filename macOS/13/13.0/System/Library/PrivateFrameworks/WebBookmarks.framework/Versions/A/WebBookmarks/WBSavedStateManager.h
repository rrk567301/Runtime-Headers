@protocol WBTabGroupSyncAgentProxyProtocol;

@interface WBSavedStateManager : NSObject

@property (class, readonly, nonatomic) WBSavedStateManager *ephemeralManager;

@property (readonly, nonatomic) id<WBTabGroupSyncAgentProxyProtocol> tabGroupSyncAgentProxy;
@property (readonly, nonatomic) BOOL isEphemeral;

- (id)init;
- (void).cxx_destruct;
- (void)moveTabGroup:(id)a0 afterTabGroup:(id)a1;
- (void)userDidAcceptCloudKitShareWithMetadata:(id)a0;
- (void)deleteTabs:(id)a0;
- (void)insertTabGroup:(id)a0 afterTabGroup:(id)a1;
- (void)saveBrowserState:(id)a0;
- (void)saveBrowserState:(id)a0 completionHandler:(id /* block */)a1;
- (void)scheduleSyncIfNeeded;
- (void)saveBrowserState:(id)a0 canSafelyTerminateCompletionHandler:(id /* block */)a1;
- (void)saveWindowState:(id)a0;
- (void)closeWindowState:(id)a0;
- (void)deleteWindowState:(id)a0;
- (void)deleteWindowStates:(id)a0;
- (void)deleteTabGroup:(id)a0;
- (void)saveTabGroup:(id)a0;
- (void)insertTabs:(id)a0 inTabGroup:(id)a1 afterTab:(id)a2;
- (id)initWithTabGroupSyncAgentProxy:(id)a0;
- (BOOL)_isDatabaseEnabled;
- (void)saveTab:(id)a0;
- (void)updateTabsInTabGroup:(id)a0;

@end
