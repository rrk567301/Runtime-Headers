@class NSString, NSError, _TtC24FaceTimeNotificationCore18AlertConfiguration;

@interface FaceTimeNotificationCore.NotificationServiceClient : NSObject <FaceTimeNotificationCore.FaceTimeNotificationServiceProtocol> {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ sourceConnection;
    void /* unknown type, empty encoding */ onStartDragging;
}

- (id)init;
- (void).cxx_destruct;
- (void)dismissAlertWithCallUniqueProxyIdentifier:(NSString *)a0 animated:(BOOL)a1 completionHandler:(void (^)(BOOL))a2;
- (void)showAlertWithCallUniqueProxyIdentifier:(NSString *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)showTestAlertWithConfiguration:(_TtC24FaceTimeNotificationCore18AlertConfiguration *)a0 completionHandler:(void (^)(NSError *))a1;

@end
