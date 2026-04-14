@class HMDHomeManager, HMFMessageDispatcher, NSString, HMDRemoteAccountManager, NSObject, IDSInvitationManager;
@protocol OS_dispatch_queue;

@interface HMDIDSInvitationManager : NSObject <HMFLogging, IDSInvitationManagerDelegate>

@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDRemoteAccountManager *remoteAccountManager;
@property (readonly) IDSInvitationManager *idsInvitationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)auditIDSSentInvitationsUsingCurrentInvitationUUIDs:(id)a0;
- (void)manager:(id)a0 incomingInvitation:(id)a1;
- (void)manager:(id)a0 receiverDidAcceptInvitation:(id)a1;
- (void)sendInvitationToDestination:(id)a0 expirationDate:(id)a1 dictionary:(id)a2 homeInvitationID:(id)a3 isRestrictedGuestInvitation:(BOOL)a4 completionBlock:(id /* block */)a5;
- (BOOL)_resolveAccountWithMergeID:(id)a0 fromAddress:(id)a1;
- (id)_sentInvitationWithUniqueID:(id)a0;
- (void)manager:(id)a0 senderDidCancelInvitation:(id)a1;
- (void)_cancelPendingIDSSentInvitationForHomeInvitationID:(id)a0 completionBlock:(id /* block */)a1;
- (void)cancelInvitationWithIDSIdentifier:(id)a0 homeInvitationID:(id)a1 completionBlock:(id /* block */)a2;
- (void)manager:(id)a0 receiverDidDeclineInvitation:(id)a1;
- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0 messageDispatcher:(id)a1 queue:(id)a2 remoteAccountManager:(id)a3;
- (id)_receivedInvitationWithUniqueID:(id)a0;
- (void)acceptInvitationWithIDSIdentifier:(id)a0 homeInvitationID:(id)a1 dictionary:(id)a2 completionBlock:(id /* block */)a3;
- (id)_sendOptions:(BOOL)a0;
- (id)initWithHomeManager:(id)a0 messageDispatcher:(id)a1 queue:(id)a2 remoteAccountManager:(id)a3 idsInvitationManager:(id)a4;
- (void)_cancelIDSSentInvitations:(id)a0;
- (void)handleForwardedAcceptance:(id)a0;
- (void)declineInvitationWithIDSIdentifier:(id)a0 homeInvitationID:(id)a1 completionBlock:(id /* block */)a2;

@end
