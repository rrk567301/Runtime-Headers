@class NSUUID;

@interface HomeKitDaemon.UserPresenceUpdateSubscriptionManager : SwiftNativeNSObject <HMFMessageReceiver> {
    void /* unknown type, empty encoding */ clientConnections;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ messageDispatcher;
}

@property (nonatomic, readonly) NSUUID *messageTargetUUID;

- (id)init;
- (void)handleHomePresenceUpdateNotification:(id)a0;
- (void)handleSubscribeMessage:(id)a0;
- (void)handleUnsubscribeMessage:(id)a0;

@end
