@class NSUUID;

@interface HomeKitDaemon.LocalPresenceBulletinNotificationCoordinator : NSObject <HMFMessageReceiver> {
    void /* unknown type, empty encoding */ messageTargetUUID;
    void /* unknown type, empty encoding */ accessory;
    void /* unknown type, empty encoding */ accessoryUUID;
    void /* unknown type, empty encoding */ home;
    void /* unknown type, empty encoding */ msgDispatcher;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, copy) NSUUID *messageTargetUUID;

- (id)init;
- (void).cxx_destruct;
- (void)handlePresenceStateChanged:(id)a0;
- (void)handlePresenceStateChangedMessage:(id)a0;

@end
