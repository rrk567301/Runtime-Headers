@class NSXPCListener, NSString, NSArray, NSMutableArray, NSObject;
@protocol SKAPresenceManaging, SKAStatusReceivingManaging, SKADatabaseProviding, SKAInvitationManaging, SKAMessagingProviding, SKADatabaseManaging, SKAStatusSubscriptionManaging, OS_dispatch_queue, SKAChannelManaging, SKAStatusEncryptionManaging, SKAStatusPublishingManaging;

@interface SKAStatusServer : NSObject <NSXPCListenerDelegate, SKADatabaseProvidingDelegate, SKAMessagingProvidingDelegate, SKAChannelManagingDelegate, SKAStatusReceivingManagingDelegate, SKADatabaseManagingDelegate, SKAInvitationManagingDelegate, SKAStatusPublishingServiceClientDelegate, SKAStatusSubscriptionServiceClientDelegate, SKAPresenceClientDelegate, SKAPresenceManagingDelegate, SKAIDSDeviceProviding>

@property (retain, nonatomic) NSXPCListener *publishingServiceListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *publishingServiceConnectionQueue;
@property (retain, nonatomic) NSMutableArray *publishingServiceConnectedClients;
@property (retain, nonatomic) NSXPCListener *subscriptionServiceListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *subscriptionServiceConnectionQueue;
@property (retain, nonatomic) NSMutableArray *subscriptionServiceConnectedClients;
@property (retain, nonatomic) NSXPCListener *presenceListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *presenceConnectionQueue;
@property (retain, nonatomic) NSMutableArray *presenceConnectedClients;
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
@property (nonatomic) char trafficModeEnabled;
@property (retain, nonatomic) id<SKADatabaseProviding> databaseProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *idsDevices;

+ (id)sharedInstance;
+ (id)logger;

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)shutdown;
- (void)logState;
- (void)_setupMaintenanceActivity;
- (void)initialCloudKitImportReceived:(id)a0;
- (char)_inTextTrafficMode;
- (char)_kettleFeatureEnabled;
- (void)_notifyPresenceClientsIfNeededOfChannelChangeForChannel:(id)a0;
- (char)_presenceServiceListener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (char)_publishingServiceListener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_senderHandlesForChannel:(id)a0;
- (char)_shouldDonateToBiomeForStatusTypeIdentifier:(id)a0;
- (char)_subscriptionServiceListener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)channelManager:(id)a0 didReceiveData:(id)a1 onChannel:(id)a2 identifier:(unsigned long long)a3 dateReceived:(id)a4 dateExpired:(id)a5;
- (void)channelManager:(id)a0 failedToSubscribeToChannel:(id)a1 withError:(id)a2;
- (void)databaseDidReceiveRemoteChangesForChannels:(id)a0;
- (void)databaseManager:(id)a0 didCreateChannel:(id)a1;
- (void)donateReceivedStatusToBiomeOnChannel:(id)a0;
- (void)invitationManager:(id)a0 didReceiveInvitation:(id)a1 forChannel:(id)a2;
- (void)invitationManager:(id)a0 didRevokeInvitationOnChannel:(id)a1;
- (void)networkBecameReachable;
- (void)presenceClientWasInvalidated:(id)a0;
- (void)presenceManager:(id)a0 didCreateChannel:(id)a1;
- (void)presenceManager:(id)a0 didReceivePresentDevicesUpdateForPresenceIdentifier:(id)a1;
- (void)presenceManager:(id)a0 didRequestToRollChannel:(id)a1;
- (void)publishingServiceClientWasInvalidated:(id)a0;
- (id)registerIDSDeviceChangedObserver:(id /* block */)a0;
- (void)service:(id)a0 didReceiveIncomingMessage:(id)a1 fromID:(id)a2 fromMergeID:(id)a3 toID:(id)a4 messageGuid:(id)a5;
- (void)service:(id)a0 outgoingMessageWithIdentifier:(id)a1 fromID:(id)a2 toID:(id)a3 didSendWithSuccess:(char)a4;
- (void)statusReceivingManager:(id)a0 didReceiveStatusUpdate:(id)a1 onChannel:(id)a2;
- (void)subscriptionServiceClientWasInvalidated:(id)a0;
- (void)unregisterIDSDeviceChangedObserver:(id)a0;

@end
