@class NSMutableArray, NSSet, NSString, NSMutableDictionary, NSMutableSet, NSObject, geo_isolater;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface GEODaemon : NSObject <GEOPListStateCapturing> {
    geo_isolater *_isolater;
    NSMutableDictionary *_servers;
    NSMutableArray *_serversToStart;
    NSMutableSet *_peers;
    NSObject<OS_dispatch_source> *_sigInfoSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_source> *_sigUsr1Src;
    NSObject<OS_dispatch_source> *_sigUsr2Src;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_dispatch_queue> *_serverQueue;
    unsigned long long _stateCaptureHandle;
    NSString *_knownLocale;
}

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSSet *peers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *submitBGSTQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)_shutdown;
- (void)start;
- (void)dealloc;
- (void)_logState;
- (BOOL)shouldAllowIncomingConnection:(id)a0;
- (void)_handleNewConnection:(id)a0;
- (void)peerDidConnect:(id)a0;
- (id)_createPeerForConnection:(id)a0;
- (void)peerDidDisconnect:(id)a0;
- (void)addServerClass:(Class)a0;
- (void)addServer:(id)a0;
- (id)startServerClassIfNecessary:(Class)a0;
- (void)initializeAndStartPairedDeviceConnectionIfNecessary;
- (void)_localeChanged:(id)a0;
- (id)initPrimaryDaemon;
- (void)installSignalHandlers;
- (id)initWithPort:(const char *)a0 createXPCListenerBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
