@class NSString, NSError, _TtC24FaceTimeNotificationCore18AlertConfiguration;

@interface FaceTimeNotificationServiceCore.NotificationViewBridgeService : NSObject <FaceTimeNotificationCore.FaceTimeNotificationServiceProtocol> {
    void /* unknown type, empty encoding */ serviceCoordinator;
    void /* unknown type, empty encoding */ devicesPrewarmed;
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ alertManager;
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dismissAlertWithCallUniqueProxyIdentifier:(NSString *)a0 animated:(BOOL)a1 completionHandler:(void (^)(BOOL))a2;
- (void)showAlertWithCallUniqueProxyIdentifier:(NSString *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)showTestAlertWithConfiguration:(_TtC24FaceTimeNotificationCore18AlertConfiguration *)a0 completionHandler:(void (^)(NSError *))a1;

@end
