@class HMDAppleAccountManager, NSNotificationCenter, NSArray, HMDHomeManager, NSString, NSUUID, NSDictionary, HMFMessageDispatcher, NSObject, NSMutableDictionary, HMDMessageHandlerMetricsDispatcher, HMDHome;
@protocol HMDMessageHandlerDataSource, OS_dispatch_queue;

@interface HMDMessageHandler : HMFObject <HMDMessageHandlerQueuedMessageDelegate, HMFLogging, HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_messageNameToQueuedIncomingMessages;
    NSMutableDictionary *_messageNameToQueuedOutgoingMessage;
    NSMutableDictionary *_deviceIdentifierToQueuedOutgoingMessageNames;
}

@property (readonly) HMDMessageHandlerMetricsDispatcher *metricsDispatcher;
@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (weak) HMDHome *home;
@property (weak) HMDHomeManager *homeManager;
@property (weak) id<HMDMessageHandlerDataSource> dataSource;
@property (readonly, copy) NSArray *ownerPrivateRemoteMessages;
@property (readonly, copy) NSArray *adminPrivateRemoteMessages;
@property (readonly, copy) NSArray *internalMessages;
@property (readonly, copy) NSArray *notifications;
@property (readonly, copy) NSDictionary *notificationsToObject;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) char hasQueuedIncomingMessages;
@property (readonly) char hasQueuedOutgoingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)privateDescription;
- (void)registerForNotifications;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)_cleanUpDeviceMappingsForMessage:(id)a0;
- (void)_logMediaDestinationControllerUpdateMetricsUsingMessage:(id)a0;
- (void)associateDevice:(id)a0 withOutgoingMessage:(id)a1;
- (void)configureWithHome:(id)a0;
- (id)currentAccountDevice;
- (id)dequeueIncomingMessage:(id)a0;
- (id)dequeueOutgoingMessage:(id)a0;
- (id)dequeueQueuedIncomingMessages;
- (id)deviceForMessage:(id)a0;
- (void)didTriggerMessageHandlerQueuedMessage:(id)a0;
- (void)didTriggerQueuedIncomingMessage:(id)a0;
- (void)didTriggerQueuedOutgoingMessage:(id)a0;
- (void)handleAccountAddedDeviceNotification:(id)a0;
- (char)hasQueuedIncomingMessage:(id)a0;
- (char)hasQueuedOutgoingMessage:(id)a0;
- (char)hasQueuedOutgoingMessagesForDevice:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 ownerPrivateRemoteMessages:(id)a3 adminPrivateRemoteMessages:(id)a4 internalMessages:(id)a5 notifications:(id)a6 notificationsToObject:(id)a7;
- (id)initWithMessageTargetUUID:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 ownerPrivateRemoteMessages:(id)a3 adminPrivateRemoteMessages:(id)a4 internalMessages:(id)a5 notifications:(id)a6 notificationsToObject:(id)a7 appleAccountManager:(id)a8 metricsDispatcher:(id)a9;
- (char)isReadyForIncomingMessage:(id)a0 error:(id *)a1;
- (char)isReadyForOutgoingMessaging;
- (void)queueIncomingMessage:(id)a0;
- (void)queueOutgoingMessage:(id)a0;
- (id)queuedIncomingMessages;
- (id)queuedOutgoingMessages;
- (id)queuedOutgoingMessagesForDevice:(id)a0;
- (void)registerForMessagesWithHome:(id)a0;
- (void)registerForSPIRemoteMessages:(id)a0 home:(id)a1 userPrivilege:(unsigned long long)a2 internalBuildOnly:(char)a3;
- (void)relayMessage:(id)a0;
- (void)relayMessage:(id)a0 shouldQueue:(char)a1;
- (void)routeMessage:(id)a0;
- (void)routeMessage:(id)a0 shouldQueue:(char)a1;
- (void)routeQueuedIncomingMessages;
- (SEL)selectorForName:(id)a0;
- (void)sendQueuedOutgoingMessages;
- (void)sendQueuedOutgoingMessages:(id)a0;
- (void)sendQueuedOutgoingMessagesForDevice:(id)a0;
- (char)shouldRelayIncomingMessage:(id)a0 error:(id *)a1;
- (void)triggerQueuedIncomingMessagesTimeouts;
- (void)triggerQueuedOutgoingMessagesTimeouts;

@end
