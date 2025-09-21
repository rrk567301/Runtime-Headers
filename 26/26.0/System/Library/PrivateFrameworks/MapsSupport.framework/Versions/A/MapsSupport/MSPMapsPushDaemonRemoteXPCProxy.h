@class MSPMapsPushDaemonRemoteProxy;

@interface MSPMapsPushDaemonRemoteXPCProxy : NSObject <MSPMapsPushDaemonProxyObserver>

@property (weak, nonatomic) MSPMapsPushDaemonRemoteProxy *target;

- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;

@end
