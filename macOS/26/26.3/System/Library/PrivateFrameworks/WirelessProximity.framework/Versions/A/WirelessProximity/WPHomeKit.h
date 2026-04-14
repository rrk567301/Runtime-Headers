@class CBDiscovery;
@protocol WPHomeKitDelegate;

@interface WPHomeKit : WPClient {
    CBDiscovery *_homeKitCBDiscovery;
}

@property (weak, nonatomic) id<WPHomeKitDelegate> delegate;

- (void)invalidate;
- (void)deviceDiscovered:(id)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)stateDidChange:(long long)a0;
- (void)checkAllowDuplicate;
- (void)setHomeKitCBDiscovery:(id)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)clientAsString;
- (unsigned long long)homeKitTypeToCBDiscoveryFlag:(long long)a0;
- (long long)homeKitTypeFromCBDiscoveryFlag:(unsigned long long)a0;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (struct { int x0; int x1; })homeKitScanTypeToCBDiscoveryScanRates:(long long)a0;
- (void)deviceFoundHandler:(id)a0 cached:(BOOL)a1;
- (id)homeKitCBDiscovery;
- (struct { long long x0; long long x1; long long x2; })dutyCycleToScanningRates:(long long)a0;
- (BOOL)isHomeKitScanActive:(unsigned long long)a0;
- (BOOL)discoveryFlagsContains:(long long)a0;
- (void)stopScanningForType:(long long)a0;
- (unsigned char)clientTypeFromHomeKitType:(long long)a0;
- (void)invalidateWHBScanSession;
- (long long)homeKitTypeFromClientType:(unsigned char)a0;
- (BOOL)isWHBSupported;
- (void)tearDownCBDiscovery;
- (void)stopCBDiscoveryScan:(long long)a0;
- (void)setStopScanParametersforType:(long long)a0;
- (void)setStartScanParametersfor:(id)a0 withValues:(id)a1 forType:(long long)a2;
- (void)startScanningWithData:(id)a0 forType:(long long)a1;
- (void).cxx_destruct;
- (id)startCBDiscoveryScan:(id)a0 forType:(long long)a1;
- (void)deviceLostHandler:(id)a0;

@end
