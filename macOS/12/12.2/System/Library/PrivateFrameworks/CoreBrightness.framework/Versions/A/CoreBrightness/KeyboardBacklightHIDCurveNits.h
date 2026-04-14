@interface KeyboardBacklightHIDCurveNits : KeyboardBacklightHIDCurve

@property (readonly) float level;

- (void)dealloc;
- (void)setBrightness:(float)a0;
- (float)brightness;
- (id)initWithQueue:(id)a0 device:(id)a1;
- (float)maxCapableNits;
- (float)maxLevelPercentage;
- (float)minCapableNits;
- (float)convertNitsToLevelPercentage:(float)a0;
- (void)setBrightness:(float)a0 withFadeSpeed:(int)a1 commit:(BOOL)a2;

@end
