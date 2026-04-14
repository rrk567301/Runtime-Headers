@class NSString, WiFiP2PXPCConnection, UNUserNotificationCenter;

@interface WiFiP2PUIAgent : NSObject <UNUserNotificationCenterDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    UNUserNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)activate;
- (id)exportedObject;
- (id)exportedInterface;
- (void)configureNotificationsWithBundleIdentifier:(id)a0;
- (void)addNotificationRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeNotificationsWithIdentifiers:(id)a0;
- (void)showInfrastructureDisconnectOnRetroModeNotificationForService:(id)a0 completionHandler:(id /* block */)a1;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;

@end
