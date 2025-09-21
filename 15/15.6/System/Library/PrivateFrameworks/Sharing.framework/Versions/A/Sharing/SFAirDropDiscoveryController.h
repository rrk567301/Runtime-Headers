@interface SFAirDropDiscoveryController : NSObject {
    char _isVisible;
    char _isLegacyDevice;
    char _isLegacyModeEnabled;
    char _isLegacyModeSettable;
    struct __SFOperation { } *_controller;
    long long _discoverableMode;
}

@property (readonly, getter=isVisible) char visible;
@property long long discoverableMode;
@property (readonly) char isTimeLimitedEveryoneMode;
@property (readonly, getter=isLegacyDevice) char legacyDevice;
@property (getter=isLegacyModeEnabled) char legacyModeEnabled;
@property (readonly, getter=isLegacyModeSettable) char legacyModeSettable;
@property (readonly) char isNearbySharingSupported;
@property (getter=isNearbySharingEnabled) char nearbySharingEnabled;
@property (getter=isCellularUsageEnabled) char cellularUsageEnabled;
@property (weak) id delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (char)isStoreDemoMode;
- (id)discoverableModeToString:(long long)a0;
- (void)handleOperationCallback:(struct __SFOperation { } *)a0 event:(long long)a1 withResults:(id)a2;
- (long long)operationDiscoverableModeToInteger:(id)a0;
- (void)startNFCMonitoring;

@end
