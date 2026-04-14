@interface HMDHomeRemoteEventRouterClientFactory : NSObject <HMDHomeRemoteEventRouterClientFactory>

- (id)primaryResidentClientWithMessageTargetUUID:(id)a0 queue:(id)a1 dataSource:(id)a2 messageDispatcher:(id)a3 notificationCenter:(id)a4 requestMessageName:(id)a5 updateMessageName:(id)a6 storeReadHandle:(id)a7 storeWriteHandle:(id)a8;
- (id)residentClientWithMessageTargetUUID:(id)a0 queue:(id)a1 dataSource:(id)a2 messageDispatcher:(id)a3 notificationCenter:(id)a4 requestMessageName:(id)a5 updateMessageName:(id)a6 storeReadHandle:(id)a7 storeWriteHandle:(id)a8;

@end
