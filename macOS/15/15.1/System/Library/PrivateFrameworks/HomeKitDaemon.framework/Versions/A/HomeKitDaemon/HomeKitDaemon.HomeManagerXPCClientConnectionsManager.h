@class NSUUID;

@interface HomeKitDaemon.HomeManagerXPCClientConnectionsManager : NSObject <HMFMessageReceiver, HMDHomeManagerXPCClientConnectionsManager> {
    void /* unknown type, empty encoding */ messageDispatcher;
    void /* unknown type, empty encoding */ accessoryBrowser;
    void /* unknown type, empty encoding */ logEventSubmitter;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ messageTargetUUID;
    void /* unknown type, empty encoding */ lockedState;
}

@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ messageReceiveQueue;
@property (nonatomic, readonly) BOOL hasActiveConnections;

- (id)init;
- (void).cxx_destruct;
- (void)configure;
- (void)handleProcessInfoStateChangedNotification:(id)a0;
- (void)handleUpdateStateMessage:(id)a0;
- (void)handleXPCConnectionDidActivateNotification:(id)a0;
- (void)handleXPCConnectionDidDeactivateNotification:(id)a0;
- (id)initWithMessageDispatcher:(id)a0 messageTargetUUID:(id)a1 messageReceiveQueue:(id)a2 accessoryBrowser:(id)a3 logEventSubmitter:(id)a4;

@end
