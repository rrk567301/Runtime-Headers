@interface FxParameterAngle : FxPinParameter {
    struct FxParameterAnglePriv { BOOL x0; double x1; double x2; } *_anglePriv;
}

- (void)dealloc;
- (id)init;
- (BOOL)isClockwise;
- (void)setStartValue:(double)a0;
- (double)stepValue;
- (void)setStepValue:(double)a0;
- (double)startValue;
- (void)setIsClockwise:(BOOL)a0;

@end
