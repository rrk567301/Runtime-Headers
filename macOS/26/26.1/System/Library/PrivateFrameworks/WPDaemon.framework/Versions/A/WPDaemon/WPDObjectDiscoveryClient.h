@class WPDSearchPartyAgent, WPDObjectDiscoveryData, WPDObjectDiscoveryManager, NSNumber;

@interface WPDObjectDiscoveryClient : WPDClient

@property BOOL pendingSent;
@property (weak) WPDObjectDiscoveryManager *objectDiscoveryManager;
@property (readonly) WPDObjectDiscoveryData *keyAddressAndPayload;
@property unsigned long long keyRequestID;
@property unsigned long long tokenRequestID;
@property (retain) WPDSearchPartyAgent *spAgent;
@property (retain) NSNumber *testBeaconingInterval;

- (void)startAdvertising:(id)a0;
- (void)stopAdvertising:(id)a0;
- (void)startSPBeaconing;
- (void)sendTestRequest:(id)a0;
- (void)stopSPBeaconing;
- (void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)a0;
- (void)dealloc;
- (void)notifyClientStateChange:(long long)a0 Restricted:(BOOL)a1;
- (void)generateStateDump;
- (void)endTestMode;
- (void).cxx_destruct;
- (void)completeSPBeaconingWithSuccess:(BOOL)a0;
- (void)updateSPNearbyTokens;
- (void)updateSPBeaconing;
- (void)notifyClientObjectDiscoveryStateChange:(long long)a0;
- (id)initWithXPCConnection:(id)a0 server:(id)a1;
- (void)destroy;
- (void)registerWithDaemon:(id)a0 forProcess:(id)a1 machName:(id)a2 holdVouchers:(long long)a3;

@end
