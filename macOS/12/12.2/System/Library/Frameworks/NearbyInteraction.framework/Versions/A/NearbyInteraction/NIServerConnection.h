@class NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface NIServerConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _resumed;
    BOOL _invalidated;
}

@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) NSUUID *sessionID;
@property (retain) id exportedObject;

- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (id)remoteObjectProxy;
- (void)activate:(id /* block */)a0;
- (id)synchronousRemoteObjectProxy;
- (void)pause:(id /* block */)a0;
- (void)queryDeviceCapabilities:(id /* block */)a0;
- (id)initWithSessionID:(id)a0 queue:(id)a1 exportedObject:(id)a2 options:(unsigned long long)a3;
- (void)runWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (id)allowTasksToFinishWhileInBackground;
- (void)stopAllowingTasksToFinishWhileInBackground;
- (void)notifySystemShutdownWithReason:(long long)a0 reply:(id /* block */)a1;
- (struct { unsigned int x0[8]; })auditTokenForConnection;

@end
