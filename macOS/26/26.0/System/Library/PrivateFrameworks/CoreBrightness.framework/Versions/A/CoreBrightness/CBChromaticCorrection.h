@class NSString, CBLuxRamp;
@protocol CBChromaticCorrectionPolicy, CBChromaticCorectionParamsProtocol;

@interface CBChromaticCorrection : CBModule <CBContainerModuleProtocol> {
    BOOL _autoBrightnessIsEnabled;
    BOOL _isEnabled;
    id<CBChromaticCorrectionPolicy> _policy;
    CBLuxRamp *_ramp;
    float _trustedLux;
}

@property (readonly) id<CBChromaticCorectionParamsProtocol> params;
@property float nits;
@property BOOL enabled;
@property (nonatomic) BOOL referenceModeActive;
@property BOOL isExternallyClocked;
@property float trustedLux;
@property void /* function */ *currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyPropertyForKey:(id)a0;
- (void)start;
- (void)dealloc;
- (void)stop;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (float)lux;
- (float)currentStrength;
- (BOOL)isInActiveRange;
- (void)setLux:(float)a0;
- (float)aodRampDuration;
- (void)handleAutoBrightnessStateUpdate:(BOOL)a0;
- (void)handleLuxUpdate:(float)a0;
- (void)handleRampResult:(int)a0;
- (id)initWithBacklightParams:(id)a0 andPolicy:(id)a1 andRamp:(id)a2;
- (float)luxAdjustedByInternalPolicies:(float)a0;
- (BOOL)nitsAreInActiveRange:(float)a0;
- (float)rampDuration;
- (BOOL)rampIsRunning;
- (BOOL)shouldRampForIncomingLux:(float)a0;
- (BOOL)shouldRampFromStartLux:(float)a0 toTargetLux:(float)a1;
- (float)targetLux;
- (void)updateRamp;
- (void)updateRampWithProgress:(float)a0;

@end
