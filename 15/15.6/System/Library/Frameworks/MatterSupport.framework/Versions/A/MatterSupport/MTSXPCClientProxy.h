@protocol MTSXPCClientProxyDelegate, MTSXPCConnection;

@interface MTSXPCClientProxy : HMFObject <MTSXPCServerInterface>

@property (readonly) id<MTSXPCConnection> connection;
@property (weak) id<MTSXPCClientProxyDelegate> delegate;
@property (readonly) char hasDevicePairingEntitlement;
@property (readonly) char hasPrivateHomeKitEntitlement;
@property (readonly) char hasMatterSetupPayloadEntitlement;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)attributeDescriptions;
- (void)checkRestrictedCharacteristicsAccessAllowedWithCompletionHandler:(id /* block */)a0;
- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)a0;
- (void)openCommissioningWindowForSystemCommissionerPairingUUID:(id)a0 duration:(double)a1 completionHandler:(id /* block */)a2;
- (void)readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDevicePairingWithUUID:(id)a0 forSystemCommissionerPairingUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeSystemCommissionerPairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)showRestrictedCharacteristicsAccessWarningAlert;
- (void)performDeviceSetupUsingRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
