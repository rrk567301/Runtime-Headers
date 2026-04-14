@class HMDMTSNetworkCredentialServer, HMDMTSAuthorizationServer, HMDMTSPairingServer, HMDMTSDeviceSetupServer, MTSXPCServer;

@interface HMDMTSXPCServer : HMFObject

@property (readonly) MTSXPCServer *xpcServer;
@property (readonly) HMDMTSPairingServer *pairingServer;
@property (readonly) HMDMTSDeviceSetupServer *deviceSetupServer;
@property (readonly) HMDMTSNetworkCredentialServer *networkCredentialServer;
@property (readonly) HMDMTSAuthorizationServer *authorizationServer;

- (void)start;
- (void).cxx_destruct;
- (id)initWithPairingServer:(id)a0 deviceSetupServer:(id)a1 networkCredentialServer:(id)a2 authorizationServer:(id)a3;
- (id)initWithPairingServer:(id)a0 deviceSetupServer:(id)a1 networkCredentialServer:(id)a2 authorizationServer:(id)a3 xpcServer:(id)a4;

@end
