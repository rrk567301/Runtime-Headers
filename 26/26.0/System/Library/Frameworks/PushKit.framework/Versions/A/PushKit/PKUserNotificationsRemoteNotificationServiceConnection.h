@class NSString, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface PKUserNotificationsRemoteNotificationServiceConnection : NSObject <PKUserNotificationServerRemoteNotificationXPCClient>

@property (retain, nonatomic) NSMutableSet *registries;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithBundleIdentifier:(id)a0;
- (void)_queue_remoteUserNotificationsRegistrationSucceededWithDeviceToken:(id)a0;
- (BOOL)allowsRemoteNotifications;
- (void)unregisterPushRegistry:(id)a0;
- (void)_invalidate;
- (void)_queue_remoteUserNotificationPayloadReceived:(id)a0 completionHandler:(id /* block */)a1;
- (void)remoteUserNotificationPayloadReceived:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)registerPushRegistry:(id)a0 completionHandler:(id /* block */)a1;
- (void)_queue_invalidatedConnection;
- (id)_queue_ensureConnection;
- (void)_queue_interruptedConnection;
- (void)didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;
- (void).cxx_destruct;

@end
