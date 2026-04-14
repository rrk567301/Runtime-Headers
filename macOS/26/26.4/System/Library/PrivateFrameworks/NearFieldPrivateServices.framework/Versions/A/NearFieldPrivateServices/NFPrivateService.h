@class NSString, NSXPCConnection;

@interface NFPrivateService : NSObject <NFPrivateServiceFrameworkInterface> {
    NSXPCConnection *_xpcConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _iVarLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isResultSuccessful:(id)a0;

- (void)disconnect;
- (id)serviceName;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canRun;
- (void)dealloc;
- (id)runService:(id)a0;
- (void)_sync_disconnect;
- (id)connectToService:(id)a0 outError:(id *)a1;
- (void)executeWithLock:(id /* block */)a0;
- (void)runService:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)serviceNotificationReceived:(id)a0;
- (oneway void)serviceNotificationReceived:(id)a0 error:(id)a1;

@end
