@class NSXPCListener, NSMutableDictionary, NSString, NSArray, NSMutableArray, NSObject;
@protocol SKAPresenceManaging, SKAStatusReceivingManaging, SKADatabaseProviding, SKAInvitationManaging, SKAMessagingProviding, SKADatabaseManaging, SKAStatusSubscriptionManaging, OS_dispatch_queue, SKAChannelManaging, SKAStatusEncryptionManaging, SKAStatusPublishingManaging;

@interface SKAStatusServer : NSObject <NSXPCListenerDelegate, SKADatabaseProvidingDelegate, SKAMessagingProvidingDelegate, SKAChannelManagingDelegate, SKAStatusReceivingManagingDelegate, SKADatabaseManagingDelegate, SKAInvitationManagingDelegate, SKAStatusPublishingServiceClientDelegate, SKAStatusSubscriptionServiceClientDelegate, SKAPresenceClientDelegate, SKAPresenceManagingDelegate, SKAIDSDeviceProviding>

@property (retain, nonatomic) NSXPCListener *publishingServiceListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *publishingServiceConnectionQueue;
@property (retain, nonatomic) NSMutableArray *publishingServiceConnectedClientProxies;
@property (retain, nonatomic) NSXPCListener *subscriptionServiceListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *subscriptionServiceConnectionQueue;
@property (retain, nonatomic) NSMutableArray *subscriptionServiceConnectedClientProxies;
@property (retain, nonatomic) NSXPCListener *presenceListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *presenceConnectionQueue;
@property (retain, nonatomic) NSMutableArray *onQueue_presenceConnectedClientProxies;
@property (retain, nonatomic) NSMutableDictionary *onQueue_pendingCompletionsByPresenceIdentifier;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *invitationManagerMessagingQueue;
@property (retain, nonatomic) id<SKAMessagingProviding> invitationMessagingProvider;
@property (retain, nonatomic) id<SKAInvitationManaging> invitationManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAStatusPublishingManaging> publishingManager;
@property (retain, nonatomic) id<SKAStatusSubscriptionManaging> subscriptionManager;
@property (retain, nonatomic) id<SKAPresenceManaging> presenceManager;
@property (retain, nonatomic) id<SKAStatusEncryptionManaging> encryptionManager;
@property (retain, nonatomic) id<SKAStatusReceivingManaging> statusReceivingManager;
@property (nonatomic) BOOL trafficModeEnabled;
@property (retain, nonatomic) id<SKADatabaseProviding> databaseProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *idsDevices;

+ (id)logger;
+ (id)sharedInstance;

- (void)shutdown;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)presenceManager:(id)a0 didRequestToRollChannel:(id)a1;
- (void)presenceManager:(id)a0 didReceivePresentDevicesUpdate:(id)a1 forPresenceIdentifier:(id)a2;
- (id)_senderHandlesForChannel:(id)a0;
- (BOOL)_subscriptionServiceListener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)refreshAssertionsForPresenceIdentifier:(id)a0 existingChannelIdentifier:(id)a1;
- (void)unregisterIDSDeviceChangedObserver:(id)a0;
- (BOOL)_shouldDonateToBiomeForStatusTypeIdentifier:(id)a0;
- (void)logState;
- (void)databaseDidReceiveRemoteChangesForChannels:(id)a0;
- (void)invitationManager:(id)a0 didReceiveInvitationWithType:(long long)a1 forChannel:(id)a2 withExistingChannel:(id)a3;
- (void)initialCloudKitImportReceived:(id)a0;
- (void)databaseManager:(id)a0 didCreateChannel:(id)a1;
- (void)service:(id)a0 didReceiveIncomingMessage:(id)a1 fromID:(id)a2 fromMergeID:(id)a3 toID:(id)a4 messageGuid:(id)a5;
- (id)init;
- (void)channelManager:(id)a0 didReceiveData:(id)a1 onChannel:(id)a2 identifier:(unsigned long long)a3 dateReceived:(id)a4 dateExpired:(id)a5;
- (void)networkBecameReachable;
- (id)registerIDSDeviceChangedObserver:(id /* block */)a0;
- (BOOL)_publishingServiceListener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)subscriptionServiceClientWasInvalidated:(id)a0;
- (void)presenceManager:(id)a0 didCreateChannel:(id)a1;
- (void)drainUpdatesForPresenceIdentifier:(id)a0;
- (void)publishingServiceClientWasInvalidated:(id)a0;
- (void)enumeratePresenceClientsWithIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)statusReceivingManager:(id)a0 didReceiveStatusUpdate:(id)a1 onChannel:(id)a2;
- (void)presenceClientWasInvalidated:(id)a0;
- (id)_onQueue_clientForPresenceIdentifier:(id)a0;
- (void)channelManager:(id)a0 failedToSubscribeToChannel:(id)a1 withError:(id)a2;
- (void)databaseAccountStatusChanged;
- (void)service:(id)a0 outgoingMessageWithIdentifier:(id)a1 fromID:(id)a2 toID:(id)a3 didSendWithSuccess:(BOOL)a4;
- (void)invitationManager:(id)a0 didRollChannelFromExistingChannel:(id)a1;
- (void)donateReceivedStatusToBiomeOnChannel:(id)a0;
- (BOOL)_presenceServiceListener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_setupMaintenanceActivity;
- (void).cxx_destruct;
- (void)invitationManager:(id)a0 didRevokeInvitationOnChannel:(id)a1;
- (BOOL)_inTextTrafficMode;

@end
