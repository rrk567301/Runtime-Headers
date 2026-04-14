@class WBCollectionConfiguration, WBTabCollection, NSString;

@interface WBTabGroupSyncAgent : NSObject <WBTabGroupSyncAgentProtocol>

@property (readonly, nonatomic) WBCollectionConfiguration *configuration;
@property (retain, nonatomic) WBTabCollection *tabCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)movePresenceForParticipantToTabWithUUID:(id)a0;
- (void)userDidAcceptTabGroupShareWithMetadata:(id)a0 inProfileWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginSharingTabGroupWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)scheduleSyncIfNeeded;
- (id)initWithConfiguration:(id)a0;
- (void)removeSyncObserver:(id)a0;
- (void)acceptShareForURL:(id)a0 invitationTokenData:(id)a1 completionHandler:(id /* block */)a2;
- (void)addSyncObserver:(id)a0;
- (void).cxx_destruct;

@end
