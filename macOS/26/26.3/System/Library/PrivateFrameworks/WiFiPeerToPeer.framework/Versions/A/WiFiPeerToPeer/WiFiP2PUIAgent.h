@class NSString, WiFiP2PXPCConnection, UNUserNotificationCenter;

@interface WiFiP2PUIAgent : NSObject <UNUserNotificationCenterDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    UNUserNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)showInfrastructureDisconnectOnRetroModeNotificationForService:(id)a0 localization:(id)a1 phoneDisconnected:(BOOL)a2 uuid:(id)a3 completionHandler:(id /* block */)a4;
- (id)exportedObject;
- (id)init;
- (void)addNotificationRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)exportedInterface;
- (void)configureNotificationsWithBundleIdentifier:(id)a0;
- (void)removeNotificationsWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)activate;

@end
