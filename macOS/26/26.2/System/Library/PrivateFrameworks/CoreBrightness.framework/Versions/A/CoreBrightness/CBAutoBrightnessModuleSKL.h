@class NSString, CBDisplayModuleSKL, CBABCurve, NSMutableArray, CBRingLight;

@interface CBAutoBrightnessModuleSKL : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {
    NSMutableArray *_ALSServices;
    NSString *_containerID;
    NSString *_uniqueID;
    NSString *_displayUUID;
    BOOL _enabled;
    BOOL _available;
    BOOL _displayState;
    BOOL _presetDisableAB;
    CBABCurve *_curve;
    CBABCurve *_preRingLightCurve;
    BOOL _updatesFrozen;
    BOOL _suspendAutoBrightness;
    BOOL _fastRamp;
    BOOL _builtIn;
    BOOL _firstBrightnessUpdate;
    BOOL _running;
    unsigned long long _chargerState;
    BOOL _chargerDimmingEnabled;
    BOOL _ecoModeState;
    CBRingLight *_ringLight;
}

@property (readonly) CBDisplayModuleSKL *displayModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)stop;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)start;
- (void)updateAvailability;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (void)dealloc;
- (BOOL)brightnessUpdatePermitted;
- (void)endFastRamp;
- (BOOL)getAggregatedLux:(float *)a0;
- (BOOL)handleChargerStateUpdate:(id)a0;
- (BOOL)handleDisplayPowerStateUpdate:(id)a0;
- (BOOL)handleEcoModeStateUpdate:(id)a0;
- (BOOL)handlePowerStateUpdate;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1 andRingLight:(id)a2;
- (BOOL)newALSService:(struct __IOHIDServiceClient { } *)a0;
- (id)newStatusInfo;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;
- (void)storeCurveToPreferences:(id)a0;
- (void)updateAutoBrightnessState:(BOOL)a0;
- (void)updateBrightness;
- (void)updateBrightnessForce:(BOOL)a0 periodOverride:(BOOL)a1 period:(float)a2 properties:(id)a3;
- (void)updateSuspend:(float)a0;
- (void)usableBrightnessRangeChangedHandler:(id)a0;
- (void)userBrightnessChangeHandler:(id)a0;
- (void)userBrightnessCommitHandler:(id)a0;

@end
