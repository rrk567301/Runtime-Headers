@class CBDiscovery;
@protocol WPHomeKitDelegate;

@interface WPHomeKit : WPClient {
    CBDiscovery *_homeKitCBDiscovery;
}

@property (weak, nonatomic) id<WPHomeKitDelegate> delegate;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stopScanningForType:(long long)a0;
- (void)stateDidChange:(long long)a0;
- (struct { long long x0; long long x1; long long x2; })dutyCycleToScanningRates:(long long)a0;
- (unsigned char)clientTypeFromHomeKitType:(long long)a0;
- (long long)homeKitTypeFromClientType:(unsigned char)a0;
- (id)clientAsString;
- (void)startScanningWithData:(id)a0 forType:(long long)a1;
- (void)checkAllowDuplicate;
- (void)deviceDiscovered:(id)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)setStartScanParametersfor:(id)a0 withValues:(id)a1 forType:(long long)a2;
- (void)setStopScanParametersforType:(long long)a0;
- (void)deviceFoundHandler:(id)a0 cached:(BOOL)a1;
- (void)deviceLostHandler:(id)a0;
- (id)startCBDiscoveryScan:(id)a0 forType:(long long)a1;
- (void)stopCBDiscoveryScan:(long long)a0;
- (void)tearDownCBDiscovery;
- (unsigned long long)homeKitTypeToCBDiscoveryFlag:(long long)a0;
- (BOOL)discoveryFlagsContains:(long long)a0;
- (BOOL)isHomeKitScanActive:(unsigned long long)a0;
- (long long)homeKitTypeFromCBDiscoveryFlag:(unsigned long long)a0;
- (struct { int x0; int x1; })homeKitScanTypeToCBDiscoveryScanRates:(long long)a0;
- (void)setHomeKitCBDiscovery:(id)a0;
- (id)homeKitCBDiscovery;
- (BOOL)isWHBSupported;
- (void)invalidateWHBScanSession;

@end
