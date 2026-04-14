@class PILStateMonitor, NSString, PILABCurve, CILController, MILController, NSMutableArray, CBRampManager;

@interface PILAutoBrightnessModule : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {
    BOOL _enabled;
    BOOL _firstBrightnessUpdate;
    BOOL _running;
    float _pilbrightness;
    PILABCurve *_curve;
    CILController *_cilController;
    MILController *_milController;
    CBRampManager *_rampManager;
    PILStateMonitor *_pilStateMonitor;
    NSMutableArray *_alsServiceClients;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (BOOL)addHIDALSService:(id)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)clockUpdateHandler:(id)a0;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (BOOL)getAggregatedLux:(float *)a0;
- (float)getPILBrightnessTarget;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)handlePILCameraStateChange:(BOOL)a0;
- (void)handlePILMicStateChange:(BOOL)a0;
- (id)initWithQueue:(id)a0 andBrtCapabilities:(id)a1;
- (BOOL)isPILBrightnessRamping;
- (id)newStatusInfo;
- (BOOL)rampPILBrightness:(float)a0 withLength:(float)a1 properties:(id)a2;
- (void)registerForPILNotifications;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)requestPILBrightnessTransitionStop;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)setManualBrightness:(float)a0 periodOverride:(BOOL)a1 period:(float)a2 properties:(id)a3;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;
- (void)unregisterForPILNotifications;
- (void)updateAutoBrightnessState:(BOOL)a0;
- (void)updateBrightness;
- (BOOL)updateBrightness:(float)a0;
- (void)updateBrightnessForce:(BOOL)a0 periodOverride:(BOOL)a1 period:(float)a2 properties:(id)a3;

@end
