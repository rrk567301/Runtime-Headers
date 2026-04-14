@interface HMDHomeManagerXPCClientConnectionsManagerFactory : NSObject

+ (id)makeInstanceWithMessageDispatcher:(id)a0 messageTargetUUID:(id)a1 messageReceiveQueue:(id)a2 accessoryBrowser:(id)a3 logEventSubmitter:(id)a4;

- (id)init;

@end
