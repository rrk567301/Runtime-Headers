@class NSString, CBDisplayModule, CBABCurve, CBABRamp, NSMutableArray;

@interface CBABModuleExternal : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {
    NSMutableArray *_ALSServices;
    NSString *_containerID;
    NSString *_uniqueID;
    NSString *_displayUUID;
    BOOL _enabled;
    BOOL _available;
    BOOL _presetDisableAB;
    CBABCurve *_curve;
    CBABRamp *_ramp;
    BOOL _updatesFrozen;
    BOOL _suspendAutoBrightness;
    BOOL _fastRamp;
    BOOL _builtIn;
}

@property (readonly) CBDisplayModule *displayModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyPropertyForKey:(id)a0;
- (void)start;
- (void)dealloc;
- (void)updateAvailability;
- (void)stop;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (void)endFastRamp;
- (BOOL)getAggregatedLux:(float *)a0;
- (BOOL)newALSService:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;
- (void)storeCurveToPreferences;
- (void)updateAutoBrightnessState:(BOOL)a0;
- (void)updateBrightness;
- (void)updateBrightnessForce:(BOOL)a0 periodOverride:(BOOL)a1 period:(float)a2;
- (void)userBrightnessChangingHandler;
- (void)userBrightnessCommitHandler;

@end
