@class NSString, ARServer, NSXPCConnection;
@protocol ARServerStatusLogging;

@interface ARDaemonControl : NSObject <ARControlProtocol> {
    NSXPCConnection *_connection;
}

@property (class, readonly, nonatomic) NSString *serviceName;

@property (weak, nonatomic) id<ARServerStatusLogging> statusLogger;
@property (weak, nonatomic) ARServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void)invalidationHandler;
- (void)interruptionHandler;
- (void).cxx_destruct;
- (void)getStatusDictionaryWithReply:(id /* block */)a0;
- (void)getStatusDictionaryWithWaitEndOfTransition:(BOOL)a0 reply:(id /* block */)a1;
- (void)getStatusWithVerboseOutput:(BOOL)a0 reply:(id /* block */)a1;
- (void)getStatusWithVerboseOutput:(BOOL)a0 waitForEndOfTransaction:(BOOL)a1 reply:(id /* block */)a2;

@end
