@class DAExtensionSessionConfiguration, NSMutableDictionary, DAAppContext, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DAExtensionSession : NSObject <CUXPCCodable> {
    DAAppContext *_appContext;
    BOOL _activateCalled;
    NSMutableDictionary *_extensionCapabilityMap;
    BOOL _changesPending;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_xpc_object> *_xpcEndpoint;
    NSObject<OS_xpc_object> *_xpcListener;
}

@property (nonatomic) unsigned int clientID;
@property (nonatomic) BOOL direct;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcCnx;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcListenerEndpoint;
@property (readonly, nonatomic) DAExtensionSessionConfiguration *configuration;
@property (copy, nonatomic) id /* block */ eventHandler;

+ (id)bluetoothRestorationIDForBundleID:(id)a0 error:(id *)a1;
+ (void)launchExtensionWithBundle:(id)a0 extensionType:(long long)a1;
+ (void)resumeExtensionWithBundle:(id)a0 extensionType:(long long)a1;
+ (void)suspendExtensionWithBundle:(id)a0 extensionType:(long long)a1;
+ (void)suspendExtensionWithBundle:(id)a0 extensionType:(long long)a1 extensionCapabilityFlags:(unsigned long long)a2;

- (void)terminate;
- (void)_updateIfNeededWithBlock:(id /* block */)a0;
- (void)encodeWithXPCObject:(id)a0;
- (void)resume;
- (void)updateWithConfiguration:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)activate;
- (void)_activateXPCStart:(BOOL)a0;
- (id)initWithConfiguration:(id)a0;
- (void)xpcReceivedMessage:(id)a0;
- (void)_activateXPCCompleted:(id)a0;
- (id)_ensureXPCStarted;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)suspend;
- (void)_xpcReceivedMessage:(id)a0;
- (void)_update;
- (void)_interrupted;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)invalidate;
- (void)launch;
- (unsigned long long)hash;
- (id)description;
- (void)_activateDirect;
- (void)_reportEvent:(id)a0;
- (void)_reportEventType:(long long)a0;
- (void)_xpcConnectionAccept:(id)a0;
- (void)_xpcListenerEvent:(id)a0;
- (void)_xpcReceivedDAExtensionEvent:(id)a0;
- (void)getEndpointsForCapabilityFlags:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)sendExtensionDataEvent:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)updateWithDAExtensionSession:(id)a0;

@end
