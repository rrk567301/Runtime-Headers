@class NSUUID, HMDModernMessagingXPCEventPublisher, NSString, HMDUserMessagePolicy, NSMutableDictionary, HMFMessageDispatcher, NSDictionary, NSMutableArray, NSObject, HMDHome;
@protocol OS_dispatch_queue, HMDModernMessagingHandlerContextFactory;

@interface HMDModernMessagingHandler : HMFObject <HMFMessageReceiver>

@property (readonly, nonatomic) NSMutableDictionary *registrationsByMessageName;
@property struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } lock;
@property (readonly, nonatomic) NSMutableArray *pendingMessages;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSUUID *homeUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *localMessageDispatcher;
@property (retain, nonatomic) HMDUserMessagePolicy *ownerPolicy;
@property (retain, nonatomic) HMDUserMessagePolicy *adminPolicy;
@property (retain, nonatomic) HMDUserMessagePolicy *userPolicy;
@property (readonly, nonatomic) NSDictionary *messageNameToRequestID;
@property (readonly, nonatomic) id<HMDModernMessagingHandlerContextFactory> contextFactory;
@property (retain, nonatomic) HMDModernMessagingXPCEventPublisher *eventPublisher;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)registerForMessages;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_storePendingHMMMRemoteMessage:(id)a0;
- (void)_createContextForRequestID:(id)a0;
- (void)_handleHMMMRemoteMessage:(id)a0;
- (void)_handleXPCConnectionDeactivatedNotification:(id)a0;
- (id)_policiesForHMMMRequestHandlerRestriction:(long long)a0;
- (void)_sendHMMMRemoteMessageToClient:(id)a0 clientMessageName:(id)a1 message:(id)a2;
- (void)_sendPendingHMMMRemoteMessagesForClientIdentifier:(id)a0;
- (void)configureWithHome:(id)a0;
- (void)configureWithHome:(id)a0 xpcEventPublisher:(id)a1;
- (id)contextForRequestID:(id)a0;
- (void)handleRegisterHMMMMessage:(id)a0;
- (void)handleSendHMMMMessage:(id)a0;
- (void)handleUnregisterHMMMMessage:(id)a0;
- (id)initForMappings:(id)a0;
- (id)initForMappings:(id)a0 withContextFactory:(id)a1;
- (void)registerHMMMMessageHandlerWithMessageName:(id)a0 userRestriction:(long long)a1 clientConnection:(id)a2 message:(id)a3;

@end
