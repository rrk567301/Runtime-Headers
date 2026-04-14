@class NSMapTable, NSXPCConnection, NSXPCInterface, TUCallCapabilitiesState, NSObject, NSString;
@protocol OS_dispatch_queue, TUCallCapabilitiesXPCServer;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions>

@property (class, retain, nonatomic) id<TUCallCapabilitiesXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUCallCapabilitiesXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *callCapabilitiesClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *callCapabilitiesServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) void *queueContext;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) int token;
@property (readonly, nonatomic) NSMapTable *delegateToQueue;
@property (retain, nonatomic) TUCallCapabilitiesState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)setRelayCallingEnabled:(BOOL)a0;
- (oneway void)endEmergencyCallbackMode;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)setRelayCallingEnabled:(BOOL)a0 forDeviceWithID:(id)a1;
- (void)performBlockOnQueue:(id /* block */)a0;
- (void)handleServerDisconnect;
- (id)asynchronousServer;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (oneway void)requestPinFromPrimaryDevice;
- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (oneway void)setThumperCallingAllowed:(BOOL)a0 onSecondaryDeviceWithID:(id)a1 forSenderIdentityWithUUID:(id)a2;
- (id)asynchronousServerWithErrorHandler:(id /* block */)a0;
- (void)_updateState:(id)a0;
- (void)dealloc;
- (oneway void)setThumperCallingEnabled:(BOOL)a0 forSenderIdentityWithUUID:(id)a1;
- (void)invalidate;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)a0 forSenderIdentityWithUUID:(id)a1;
- (oneway void)capabilityStateUpdated:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)init;
- (oneway void)setWiFiCallingRoamingEnabled:(BOOL)a0 forSenderIdentityWithUUID:(id)a1;
- (void)_retrieveState;
- (oneway void)setVoLTECallingEnabled:(BOOL)a0 forSenderIdentityWithUUID:(id)a1;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)a0;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)a0;
- (void)performDelegateCallbackBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (oneway void)setWiFiCallingEnabled:(BOOL)a0 forSenderIdentityWithUUID:(id)a1;

@end
