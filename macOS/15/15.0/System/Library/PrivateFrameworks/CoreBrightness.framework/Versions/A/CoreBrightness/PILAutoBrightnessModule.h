@class CBDisplayModuleSKL, NSString, PILABCurve, CBRampManager, PILStateMonitor, MILController, CILController, _TtC14CoreBrightness14PILCalibration;

@interface PILAutoBrightnessModule : CBModule <CBContainerModuleProtocol> {
    BOOL _enabled;
    PILABCurve *_curve;
    BOOL _builtIn;
    BOOL _firstBrightnessUpdate;
    BOOL _running;
    float _lux;
    float _pilbrightness;
    CILController *_cilController;
    MILController *_milController;
    CBRampManager *_rampManager;
    _TtC14CoreBrightness14PILCalibration *_pilCalibration;
    PILStateMonitor *_pilStateMonitor;
}

@property (readonly) CBDisplayModuleSKL *displayModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)clockUpdateHandler:(id)a0;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (float)getPILBrightnessTarget;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)handlePILCameraStateChange:(BOOL)a0;
- (void)handlePILMicStateChange:(BOOL)a0;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1 andBrtCapabilities:(id)a2;
- (BOOL)isPILBrightnessRamping;
- (id)newStatusInfo;
- (BOOL)rampPILBrightness:(float)a0 withLength:(float)a1 properties:(id)a2;
- (void)registerForPILNotifications;
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
