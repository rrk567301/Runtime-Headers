@class NSString, PILABCurve, PILController, CBALSServiceClient, CBRampManager;

@interface PILAutoBrightnessModule : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {
    BOOL _enabled;
    BOOL _firstBrightnessUpdate;
    BOOL _running;
    float _pilbrightness;
    float _minimumAchievableBrightness;
    float _maximumAchievableBrightness;
    BOOL _pilBrightnessRangeSet;
    PILABCurve *_curve;
    PILController *_pilController;
    CBRampManager *_rampManager;
    CBALSServiceClient *_alsServiceClient;
    NSString *_rampString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyPropertyForKey:(id)a0;
- (void)start;
- (void)dealloc;
- (void)stop;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)clockUpdateHandler:(id)a0;
- (float)currentPILBrightness;
- (float)getMaximumAchievableBrightness;
- (float)getMinimumAchievableBrightness;
- (float)getPILBrightnessTarget;
- (void)handleEnablementStateChange:(BOOL)a0;
- (id)initWithQueue:(id)a0 PILParams:(id)a1 calibration:(unsigned short)a2 andALSServiceClient:(id)a3;
- (BOOL)isPILBrightnessRamping;
- (id)newStatusInfo;
- (BOOL)rampPILBrightness:(float)a0 withLength:(float)a1 properties:(id)a2;
- (BOOL)requestPILBrightnessTransitionStop;
- (void)setManualBrightness:(float)a0 periodOverride:(BOOL)a1 period:(float)a2 properties:(id)a3;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;
- (id)transportOfType:(unsigned long long)a0;
- (void)updateAutoBrightnessState:(BOOL)a0;
- (void)updateBrightness;
- (BOOL)updateBrightness:(float)a0;
- (void)updateBrightnessForce:(BOOL)a0 periodOverride:(BOOL)a1 period:(float)a2 properties:(id)a3;
- (void)updatePILRangeIfNeeded;

@end
