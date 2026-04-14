@class NSUUID, NSString, NSMutableDictionary, HMFMessageDispatcher, HMDRemoteEventRouterServerMessageReceiver, NSObject, NSMutableArray, HMEMessageDatagramServer, NSNotificationCenter, HMDEventRouterTimerProvider;
@protocol OS_os_log, HMDRemoteEventRouterServerDataSource, OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDRemoteEventRouterServer : NSObject <HMFLogging, HMFMessageReceiver, HMEMessageDatagramServerDataSource, HMEMessageDatagramServerDelegate> {
    NSObject<OS_os_log> *_logger;
    BOOL _isPrimaryResident;
    BOOL _isResidentEventProviding;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_homeUUID;
    NSUUID *_accessoryUUID;
    NSString *_routerRequestMessageName;
    NSString *_routerUpdateMessageName;
    HMFMessageDispatcher *_messageDispatcher;
    NSNotificationCenter *_notificationCenter;
    HMDEventRouterTimerProvider *_timerProvider;
    HMEMessageDatagramServer *_connectionServer;
    NSMutableArray *_currentConnections;
    id<HMDRemoteEventRouterServerDataSource> _dataSource;
    NSMutableDictionary *_accessControls;
    HMDRemoteEventRouterServerMessageReceiver *_accessoryMessageReceiver;
    id<HMMLogEventSubmitting> _logEventSubmitter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)submitLogEvent:(id)a0;
- (void)submitLogEvent:(id)a0 error:(id)a1;
- (id)dumpStateDescription;
- (BOOL)shouldAllowEvent:(id)a0 topic:(id)a1 connection:(id)a2;
- (id)initWithPrimaryModeUUID:(id)a0 residentModeUUID:(id)a1 queue:(id)a2 messageDispatcher:(id)a3 dataSource:(id)a4 notificationCenter:(id)a5 requestMessageName:(id)a6 updateMessageName:(id)a7 subscriptionProvider:(id)a8 registrationEventRouter:(id)a9 storeReadHandle:(id)a10;
- (void)configureIsPrimaryResident:(BOOL)a0 isResidentEventProviding:(BOOL)a1 additionalPolicies:(id)a2;
- (void)didAddCurrentAccessory:(id)a0 additionalPolicies:(id)a1;
- (id)_underlyingMessageDataFromFragmentMessageData:(id)a0 error:(id *)a1;
- (void)_registerForMessages:(id)a0;
- (id)initWithPrimaryModeUUID:(id)a0 residentModeUUID:(id)a1 queue:(id)a2 messageDispatcher:(id)a3 dataSource:(id)a4 notificationCenter:(id)a5 requestMessageName:(id)a6 updateMessageName:(id)a7 logCategory:(const char *)a8 logEventSubmitter:(id)a9 connectionServerFactory:(id /* block */)a10;
- (void)_handlePrimaryRequestMessage:(id)a0;
- (void)_handleUpdatedPrimaryResidentNotification:(id)a0;
- (void)respondToMessage:(id)a0 underlyingResponseData:(id)a1 supportsFragmentMessage:(BOOL)a2 label:(id)a3;
- (void)_handleRequestMessage:(id)a0 connectionMode:(long long)a1;
- (void)_handleProtoRequest:(id)a0 originalMessage:(id)a1 connectionMode:(long long)a2;
- (void)_handleConnectRequest:(id)a0 originalMessage:(id)a1 connectionMode:(long long)a2;
- (void)_handleDisconnectRequest:(id)a0 originalMessage:(id)a1;
- (void)_handleChangeRegistrationsRequest:(id)a0 originalMessage:(id)a1;
- (void)_handleKeepAliveRequest:(id)a0 originalMessage:(id)a1;
- (void)_handleFetchEventsRequest:(id)a0 originalMessage:(id)a1;
- (void)respondToMessage:(id)a0 underlyingResponseData:(id)a1 connection:(id)a2 label:(id)a3;
- (id)messageTargetForMode:(long long)a0;
- (void)sendMessageWithPayloadMessage:(id)a0 destination:(id)a1 messageType:(long long)a2 completion:(id /* block */)a3;
- (void)_registerForAccessoryMessages:(id)a0;
- (double)server:(id)a0 timeoutIntervalForConnection:(id)a1;
- (BOOL)server:(id)a0 isConnectionTerminatingError:(id)a1;
- (id)serverTimerProvider:(id)a0;
- (BOOL)server:(id)a0 shouldProcessEventsForConnection:(id)a1;
- (unsigned long long)serverFragmentEventsDataSize:(id)a0;
- (void)server:(id)a0 sendEvents:(id)a1 connection:(id)a2 completion:(id /* block */)a3;
- (void)server:(id)a0 connectionDidExpire:(id)a1;

@end
