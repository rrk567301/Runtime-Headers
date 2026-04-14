@class AAAccountUserNotificationDaemonConnection;

@interface AAAccountUserNotificationPublisher : NSObject {
    AAAccountUserNotificationDaemonConnection *_daemonConnection;
}

- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)postAccountUserNotificationWith:(id)a0 completion:(id /* block */)a1;

@end
