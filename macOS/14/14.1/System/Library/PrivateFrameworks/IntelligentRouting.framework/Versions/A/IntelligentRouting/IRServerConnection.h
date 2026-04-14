@class NSUUID, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface IRServerConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) NSUUID *sessionID;
@property (readonly) id exportedObject;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (id)remoteObjectProxy;
- (id)initWithSessionID:(id)a0 queue:(id)a1 exportedObject:(id)a2;

@end
