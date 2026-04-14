@class NSUUID;

@interface HMDRemoteEventRouterResidentClient : HMDRemoteEventRouterClient

@property (readonly, copy) NSUUID *homeUUID;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)dumpStateDescription;
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)a0;
- (BOOL)clientIsEnabled:(id)a0;
- (id)client:(id)a0 upstreamTopicsForTopic:(id)a1;
- (id)initWitAccessoryUUID:(id)a0 homeUUID:(id)a1 queue:(id)a2 dataSource:(id)a3 messageDispatcher:(id)a4 notificationCenter:(id)a5 requestMessageName:(id)a6 updateMessageName:(id)a7 storeReadHandle:(id)a8 storeWriteHandle:(id)a9 retryIntervalProvider:(id)a10 logCategory:(const char *)a11;
- (id)forwardingTopicsForTopics:(id)a0 downstreamRouter:(id)a1;

@end
