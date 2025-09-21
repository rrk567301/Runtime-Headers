@class NSString, NSXPCConnection, NSXPCInterface, PKXPCForwarder;
@protocol PKXPCServiceDelegate, PKForegroundActiveArbiter, NSObject, PKInvalidatable;

@interface PKXPCService : NSObject <PKForegroundActiveArbiterObserver> {
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedObjectInterface;
    NSString *_className;
    NSString *_serviceResumedNotificationName;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    PKXPCForwarder *_templateExportedProxy;
    PKXPCForwarder *_currentExportedProxy;
    char _suspendCallbacks;
    char _forceConnectionOnResume;
    id<PKForegroundActiveArbiter> _foregroundActiveArbiter;
    id<NSObject> _foregroundListener;
    id<NSObject> _backgroundListener;
    id<PKInvalidatable> _serviceResumedListenerInvalidater;
}

@property (readonly, nonatomic) NSString *machServiceName;
@property (readonly, nonatomic) unsigned long long options;
@property (weak, nonatomic) id<PKXPCServiceDelegate> delegate;
@property (readonly, nonatomic, getter=isSuspended) char suspended;
@property (readonly, nonatomic) char connectionEstablished;
@property (nonatomic) char forceConnectionOnResume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setForegroundActiveArbiter:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)existingRemoteObjectProxy;
- (id)existingRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)existingSynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (id)initWithMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedObjectInterface:(id)a2 exportedObject:(id)a3;
- (id)initWithMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedObjectInterface:(id)a2 exportedObject:(id)a3 serviceResumedNotificationName:(id)a4;
- (id)initWithMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedObjectInterface:(id)a2 exportedObject:(id)a3 serviceResumedNotificationName:(id)a4 options:(unsigned long long)a5;
- (id)remoteObjectProxyWithFailureHandler:(id /* block */)a0;

@end
