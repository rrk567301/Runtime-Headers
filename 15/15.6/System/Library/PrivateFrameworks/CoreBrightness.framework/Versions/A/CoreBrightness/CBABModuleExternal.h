@class NSString, CBDisplayModule, CBABCurve, CBABRamp, NSMutableArray;

@interface CBABModuleExternal : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {
    NSMutableArray *_ALSServices;
    NSString *_containerID;
    NSString *_uniqueID;
    NSString *_displayUUID;
    char _enabled;
    char _available;
    char _presetDisableAB;
    CBABCurve *_curve;
    CBABRamp *_ramp;
    char _updatesFrozen;
    char _suspendAutoBrightness;
    char _fastRamp;
    char _builtIn;
}

@property (readonly) CBDisplayModule *displayModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)updateAvailability;
- (void)stop;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)endFastRamp;
- (char)getAggregatedLux:(float *)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (BOOL)newALSService:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;
- (void)storeCurveToPreferences;
- (void)updateAutoBrightnessState:(char)a0;
- (void)updateBrightness;
- (void)updateBrightnessForce:(char)a0 periodOverride:(char)a1 period:(float)a2;
- (void)userBrightnessChangingHandler;
- (void)userBrightnessCommitHandler;

@end
