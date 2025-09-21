@interface NSPressureSensitivePanGestureRecognizer : NSPanGestureRecognizer <NSCoding> {
    double _defaultPressure;
    long long _flags;
}

@property double defaultPressure;
@property char recognizesOnPressureChange;
@property (readonly) double pressure;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)_appendSubclassDescription:(id)a0;
- (id)_desiredPressureBehavior;
- (char)_hasCustomDefaultPressure;
- (void)_setHasCustomDefaultPressure:(char)a0;
- (void)_updateForMouseDownWithEvent:(id)a0;
- (void)_updatePropertiesWithEvent:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressureChangeWithEvent:(id)a0;
- (char)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (void)tabletPoint:(id)a0;

@end
