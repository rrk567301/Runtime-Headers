@class NSUUID;

@interface HMDRemoteEventRouterResidentClient : HMDRemoteEventRouterClient {
    BOOL _hasResetConnectionTimer;
}

@property (readonly, copy) NSUUID *homeUUID;

- (id)accessoryUUID;
- (id)dumpStateDescription;
- (void)_registerForNotifications;
- (void).cxx_destruct;
- (void)configureIsPrimaryResident:(BOOL)a0 networkAvailable:(BOOL)a1 additionalPolicies:(id)a2;
- (id)client:(id)a0 upstreamTopicsForTopic:(id)a1;
- (BOOL)clientIsEnabled:(id)a0;
- (id)forwardingTopicsForTopics:(id)a0 downstreamRouter:(id)a1;
- (void)handleAccessoryDeviceDidUpdateNotification:(id)a0;
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)a0;
- (void)handlePrimaryResidentReceivedIncomingConnection:(id)a0;
- (id)initWitAccessoryUUID:(id)a0 homeUUID:(id)a1 queue:(id)a2 dataSource:(id)a3 messageDispatcher:(id)a4 notificationCenter:(id)a5 requestMessageName:(id)a6 updateMessageName:(id)a7 multiHopFetchResponseMessageName:(id)a8 storeReadHandle:(id)a9 storeWriteHandle:(id)a10 retryIntervalProvider:(id)a11 logCategory:(const char *)a12;

@end
