@class NSString, NSXPCConnection, NSHashTable, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface WBTabGroupSyncAgentProxy : NSObject <WBTabGroupSyncAgentSyncObserver, WBSDeallocationSentinelObserver, WBTabGroupSyncAgentProxyProtocol, WBTabGroupManagerObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_syncObserverQueue;
    NSHashTable *_syncObservers;
    NSDate *_firstReconnectionAttemptDate;
    unsigned long long _numberOfReconnectionAttempts;
}

@property (class, readonly, nonatomic) WBTabGroupSyncAgentProxy *sharedProxy;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)sentinelDidDeallocateWithContext:(id)a0;
- (void)_setUpConnectionIfNeeded;
- (void)deleteWindowStates:(id)a0 completionHandler:(id /* block */)a1;
- (void)addSyncObserver:(id)a0;
- (void)removeSyncObserver:(id)a0;
- (void)userDidAcceptCloudKitShareWithMetadata:(id)a0;
- (void)saveBrowserState:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginSharingTabGroupWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveWindowState:(id)a0 completionHandler:(id /* block */)a1;
- (void)movePresenceForParticipantToTabWithUUID:(id)a0;
- (void)scheduleSyncIfNeeded;
- (void)tabGroupManagerDidUpdateSyncableContent:(id)a0;
- (void)shareDidUpdateForTabGroupWithUUID:(id)a0;
- (void)participants:(id)a0 didJoinSharedTabGroupWithUUID:(id)a1;
- (void)participants:(id)a0 didLeaveSharedTabGroupWithUUID:(id)a1;
- (void)participantsDidUpdateInTabGroupWithUUID:(id)a0;
- (void)activeParticipantsDidUpdateInTabWithUUID:(id)a0;
- (void)didAddTabWithUUID:(id)a0 title:(id)a1 inSharedTabGroupWithUUID:(id)a2 byParticipantWithRecordID:(id)a3;
- (void)didNavigateInTabWithUUID:(id)a0 title:(id)a1 inSharedTabGroupWithUUID:(id)a2 byParticipantWithRecordID:(id)a3;
- (void)didRemoveTabWithUUID:(id)a0 title:(id)a1 inSharedTabGroupWithUUID:(id)a2 byParticipantWithRecordID:(id)a3;
- (void)didChangeScopedFavoritesInSharedTabGroupWithUUID:(id)a0 byParticipantWithRecordID:(id)a1;
- (void)didChangeBackgroundImageInSharedTabGroupWithUUID:(id)a0 byParticipantWithRecordID:(id)a1;
- (void)didFetchRecentlyAcceptedSharedTabGroupWithUUID:(id)a0 acceptedShareDate:(id)a1;
- (void)_syncAgentDidLaunch:(id)a0;
- (void)acceptShareForURL:(id)a0 invitationTokenData:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteTabGroup:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertTabGroup:(id)a0 afterTabGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)moveTabGroup:(id)a0 afterTabGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveTabGroup:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteTabs:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertTabs:(id)a0 inTabGroup:(id)a1 afterTab:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveTab:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateTabs:(id)a0 inTabGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)closeWindowState:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteWindowState:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveBrowserState:(id)a0 canSafelyTerminateCompletionHandler:(id /* block */)a1;
- (void)_setUpConnection;
- (id /* block */)emptyCompletionHandler;
- (id /* block */)emptyChangeSetCompletionHandler;
- (BOOL)_shouldAttemptToReconnect;
- (void)_setUpSyncObserverIfNeeded;
- (void)_enumerateSyncObserversUsingBlock:(id /* block */)a0;

@end
