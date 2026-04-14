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
- (void)notifyClientStateChange:(long long)a0 Restricted:(BOOL)a1;
- (void)dealloc;
- (void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)a0;
- (void)generateStateDump;
- (void)stopAdvertising:(id)a0;
- (void)completeSPBeaconingWithSuccess:(BOOL)a0;
- (void)updateSPNearbyTokens;
- (void)sendTestRequest:(id)a0;
- (void)endTestMode;
- (void)destroy;
- (void)stopSPBeaconing;
- (void)startSPBeaconing;
- (void)notifyClientObjectDiscoveryStateChange:(long long)a0;
- (void)registerWithDaemon:(id)a0 forProcess:(id)a1 machName:(id)a2 holdVouchers:(long long)a3;
- (void)updateSPBeaconing;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0 server:(id)a1;

@end
