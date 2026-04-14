@class NSXPCConnection;

@interface NFPrivateService : NSObject {
    NSXPCConnection *_xpcConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _iVarLock;
}

+ (BOOL)isResultSuccessful:(id)a0;

- (void)disconnect;
- (id)serviceName;
- (BOOL)canRun;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)runService:(id)a0;
- (void)_sync_disconnect;
- (id)connectToService:(id)a0 outError:(id *)a1;
- (void)executeWithLock:(id /* block */)a0;
- (void)runService:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)serviceNotificationReceived:(id)a0;

@end
