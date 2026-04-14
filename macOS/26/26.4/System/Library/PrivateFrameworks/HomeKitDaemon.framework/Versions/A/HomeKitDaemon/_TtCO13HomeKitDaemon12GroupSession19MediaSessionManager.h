@class NSUUID, OS_dispatch_queue;

@interface _TtCO13HomeKitDaemon12GroupSession19MediaSessionManager : SwiftNativeNSObject <HMFMessageReceiver, HMFTimerManagerDelegate> {
    void /* unknown type, empty encoding */ messageDispatcher;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ timerManager;
    void /* unknown type, empty encoding */ noParticipantTimerContext;
    void /* unknown type, empty encoding */ noParticipantTimeOut;
    void /* unknown type, empty encoding */ groupSession;
    void /* unknown type, empty encoding */ notificationTasks;
}

@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) OS_dispatch_queue *messageReceiveQueue;

- (id)init;
- (void)timerManager:(id)a0 didFireForTimerContext:(id)a1;
- (void)handleRequestMediaGroupSessionWithMessage:(id)a0;

@end
