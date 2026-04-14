@class MSPMapsPushDaemonRemoteProxy;

@interface MSPMapsPushDaemonRemoteXPCProxy : NSObject <MSPMapsPushDaemonProxyObserver>

@property (weak, nonatomic) MSPMapsPushDaemonRemoteProxy *target;

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;

@end
