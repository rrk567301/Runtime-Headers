@class NSDictionary;

@interface KeyboardBacklightHIDCurve : KeyboardBacklight {
    int _color;
    float _curveVersion;
}

@property (readonly) NSDictionary *brightnessCurve;
@property (readonly) float maxCurveNits;
@property (readonly) float chicletCurveCoefficient;
@property (readonly) float chicletCurvePower;
@property float luxHysteresis;
@property (readonly) float level;
@property (readonly) float maxLevelPercentage;
@property (readonly) float maxCapableNits;
@property (readonly) float minCapableNits;

- (id)copyPropertyForKey:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (float)brightness;
- (void)setBacklightLevel:(float)a0;
- (int)color;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setBrightness:(float)a0;
- (id)description;
- (void)setColor:(int)a0;
- (BOOL)KBBrightnessCurvePropertyHandler:(id)a0;
- (void)getKeyboardBacklightPreferences;
- (BOOL)KBBrightnessLuxHysteresisPropertyHandler:(id)a0;
- (void)calculateLevelPercentageAtAmbient:(float)a0;
- (float)convertNitsToLevelPercentage:(float)a0;
- (float)convertPWMPercentageToNits:(float)a0;
- (float)currentLuxToAmbient;
- (float)currentLuxToNits;
- (id)defaultBrightnessCurve;
- (void)handleLuxUpdate:(float)a0;
- (id)initWithQueue:(id)a0 device:(id)a1;
- (BOOL)isBrightnessCurveValid:(id)a0;
- (float)maxUserLevel;
- (float)perceptualBrightnessForLevel:(float)a0;
- (void)reconfigureSettingsForColor:(int)a0;
- (void)setBrightness:(float)a0 withFadeSpeed:(int)a1 commit:(BOOL)a2;
- (void)storeKeyboardBacklightCurveToPreferences;
- (void)storeKeyboardBacklightPreferences;
- (void)updateBrightnessCurve:(id)a0;
- (void)updateDefaultBrightnessCurve:(id)a0;
- (void)updateDefaultCurveForColor:(int)a0;
- (void)updateLuxToNitsCurve;

@end
