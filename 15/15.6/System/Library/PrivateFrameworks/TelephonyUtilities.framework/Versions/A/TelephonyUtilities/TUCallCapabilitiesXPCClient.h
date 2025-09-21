@class NSMapTable, NSXPCConnection, NSXPCInterface, TUCallCapabilitiesState, NSObject, NSString;
@protocol OS_dispatch_queue, TUCallCapabilitiesXPCServer;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions>

@property (class, retain, nonatomic) id<TUCallCapabilitiesXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUCallCapabilitiesXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *callCapabilitiesClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *callCapabilitiesServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) int token;
@property (readonly, nonatomic) NSMapTable *delegateToQueue;
@property (retain, nonatomic) TUCallCapabilitiesState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)_updateState:(id)a0;
- (void)_retrieveState;
- (id)asynchronousServer;
- (id)asynchronousServerWithErrorHandler:(id /* block */)a0;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)capabilityStateUpdated:(id)a0;
- (oneway void)endEmergencyCallbackMode;
- (void)handleServerDisconnect;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)a0;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)a0;
- (void)performDelegateCallbackBlock:(id /* block */)a0;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)setRelayCallingEnabled:(char)a0;
- (oneway void)setRelayCallingEnabled:(char)a0 forDeviceWithID:(id)a1;
- (oneway void)setThumperCallingAllowed:(char)a0 onSecondaryDeviceWithID:(id)a1 forSenderIdentityWithUUID:(id)a2;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(char)a0 forSenderIdentityWithUUID:(id)a1;
- (oneway void)setThumperCallingEnabled:(char)a0 forSenderIdentityWithUUID:(id)a1;
- (oneway void)setVoLTECallingEnabled:(char)a0 forSenderIdentityWithUUID:(id)a1;
- (oneway void)setWiFiCallingEnabled:(char)a0 forSenderIdentityWithUUID:(id)a1;
- (oneway void)setWiFiCallingRoamingEnabled:(char)a0 forSenderIdentityWithUUID:(id)a1;
- (id)synchronousServerWithErrorHandler:(id /* block */)a0;

@end
