@class NSXPCListener, NSString, NSXPCConnection, NSLock;
@protocol iCloudUserNotificationDelegate;

@interface iCloudUserNotifier : NSObject <iCloudUserNotifierRemoteObjectProtocol, NSXPCListenerDelegate> {
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListener *_listener;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *serviceName;
@property (retain) id<iCloudUserNotificationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllNotifications;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)deliverNotification:(id)a0;
- (void)removeNotificationWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)agentConnection;
- (void)_agentConnectionFailedToBootstrap;
- (void)_agentConnectionWasInterrupted;
- (void)_agentConnectionWasInvalidated;
- (id)_pendingNotificationsForAllClients;
- (id)_pendingNotificationsWithClientIdentifier:(id)a0;
- (void)didActivateNotification:(id)a0;
- (void)didClearNotification:(id)a0;
- (void)didDismissNotification:(id)a0;
- (id)initWithIdentifier:(id)a0 machServiceName:(id)a1;
- (id)pendingNotifications;
- (void)removeNotificationsWithDSID:(id)a0;

@end
