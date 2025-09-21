@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_semaphore, SLSRemoteViewEventClientDelegate, CPXRemoteViewEventProtocolClientCallsServer, NSObject, SLSRemoteViewEventClientConfig;

@interface SLSRemoteViewEventClient : NSObject <CPXRemoteViewEventProtocolServerCallsClient, BSInvalidatable> {
    id<SLSRemoteViewEventClientConfig> _config;
    BSServiceConnection *_connection;
    id<NSObject, CPXRemoteViewEventProtocolClientCallsServer> _proxy;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (weak, nonatomic) id<SLSRemoteViewEventClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)possibleEventDescriptorForVirtualKeyCode:(unsigned int)a0;

- (void)invalidate;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)activateWithHandler:(id /* block */)a0 invalidationHandler:(id /* block */)a1;
- (id)deferringEnvironmentFromEvent:(const struct __CGEvent { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; struct _SLSEventRecord *x2; } *)a0;
- (id)deferringTokenFromEvent:(const struct __CGEvent { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; struct _SLSEventRecord *x2; } *)a0;
- (oneway void)sendEventToHost:(id)a0 fullDispatch:(id)a1 reply:(id /* block */)a2;
- (void)servicePassEventUpstreamToHost:(struct __CGEvent { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; struct _SLSEventRecord *x2; } *)a0 fullDispatch:(BOOL)a1 reply:(id /* block */)a2;
- (void)setDeferringToken:(id)a0 andEnvironment:(id)a1 inEvent:(const struct __CGEvent { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; struct _SLSEventRecord *x2; } *)a2;

@end
