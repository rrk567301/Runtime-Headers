@class CBDiscovery;
@protocol WPHomeKitDelegate;

@interface WPHomeKit : WPClient {
    CBDiscovery *_homeKitCBDiscovery;
}

@property (weak, nonatomic) id<WPHomeKitDelegate> delegate;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (void)stopScanningForType:(long long)a0;
- (long long)homeKitTypeFromCBDiscoveryFlag:(unsigned long long)a0;
- (void)checkAllowDuplicate;
- (id)clientAsString;
- (unsigned char)clientTypeFromHomeKitType:(long long)a0;
- (void)deviceDiscovered:(id)a0;
- (void)deviceFoundHandler:(id)a0 cached:(char)a1;
- (void)deviceLostHandler:(id)a0;
- (char)discoveryFlagsContains:(long long)a0;
- (struct { long long x0; long long x1; long long x2; })dutyCycleToScanningRates:(long long)a0;
- (id)homeKitCBDiscovery;
- (struct { int x0; int x1; })homeKitScanTypeToCBDiscoveryScanRates:(long long)a0;
- (long long)homeKitTypeFromClientType:(unsigned char)a0;
- (unsigned long long)homeKitTypeToCBDiscoveryFlag:(long long)a0;
- (void)invalidateWHBScanSession;
- (char)isHomeKitScanActive:(unsigned long long)a0;
- (char)isWHBSupported;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)setHomeKitCBDiscovery:(id)a0;
- (void)setStartScanParametersfor:(id)a0 withValues:(id)a1 forType:(long long)a2;
- (void)setStopScanParametersforType:(long long)a0;
- (id)startCBDiscoveryScan:(id)a0 forType:(long long)a1;
- (void)startScanningWithData:(id)a0 forType:(long long)a1;
- (void)stopCBDiscoveryScan:(long long)a0;
- (void)tearDownCBDiscovery;

@end
