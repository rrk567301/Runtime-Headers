@class NSUUID, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, OS_os_log;

@interface NIServerConnection : NSObject {
    NSXPCConnection *_connection;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
}

@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) NSUUID *sessionID;
@property (retain) id exportedObject;

+ (char)_internalBuildShouldDenyConnection;
+ (id)createOneShotConnectionAndResume:(char)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxy;
- (struct { unsigned int x0[8]; })auditTokenForConnection;
- (id)initWithSessionID:(id)a0 queue:(id)a1 exportedObject:(id)a2 options:(unsigned long long)a3;

@end
