@class NSString, NSError, NSDictionary;

@interface CloudKitDaemon.CKDAdopterProcessScopedStateManager : NSObject <CKXPCAdopterProcessScopedDaemon> {
    void /* unknown type, empty encoding */ clientConnection;
}

- (id)init;
- (id)initWithClientConnection:(id)a0;
- (void).cxx_destruct;
- (void)globalDeviceIdentifierWithCompletionHandler:(void (^)(NSString *, NSError *))a0;
- (void)reportSymptomDiagnosticsWithType:(NSString *)a0 subType:(NSString *)a1 reason:(NSString *)a2 context:(NSString *)a3 processName:(NSString *)a4 completionHandler:(void (^)(NSError *))a5;
- (void)reportTelemetryEventWithEventType:(NSString *)a0 event:(NSDictionary *)a1 bundleIdentifier:(NSString *)a2 completionHandler:(void (^)(NSError *))a3;

@end
