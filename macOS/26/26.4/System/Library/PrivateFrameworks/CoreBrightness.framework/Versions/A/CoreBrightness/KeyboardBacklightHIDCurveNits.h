@interface KeyboardBacklightHIDCurveNits : KeyboardBacklightHIDCurve

@property (readonly) float level;

- (float)brightness;
- (void)setBrightness:(float)a0;
- (void)dealloc;
- (float)convertNitsToLevelPercentage:(float)a0;
- (id)initWithQueue:(id)a0 device:(id)a1;
- (float)maxCapableNits;
- (float)maxLevelPercentage;
- (float)minCapableNits;
- (void)setBrightness:(float)a0 withFadeSpeed:(int)a1 commit:(BOOL)a2;

@end
