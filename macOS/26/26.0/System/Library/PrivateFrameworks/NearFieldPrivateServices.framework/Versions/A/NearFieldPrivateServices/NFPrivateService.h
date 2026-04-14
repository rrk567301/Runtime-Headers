@class NSXPCConnection;

@interface NFPrivateService : NSObject {
    NSXPCConnection *_xpcConnection;
}

+ (BOOL)isResultSuccessful:(id)a0;

- (void)disconnect;
- (void)dealloc;
- (id)serviceName;
- (BOOL)canRun;
- (void).cxx_destruct;
- (id)runService:(id)a0;
- (id)connectToService:(id)a0;
- (void)runService:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)serviceNotificationReceived:(id)a0;

@end
