@interface NSPressureSensitivePanGestureRecognizer : NSPanGestureRecognizer <NSCoding> {
    double _defaultPressure;
    long long _flags;
}

@property double defaultPressure;
@property BOOL recognizesOnPressureChange;
@property (readonly) double pressure;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_appendSubclassDescription:(id)a0;
- (void)_updateForMouseDownWithEvent:(id)a0;
- (void)_updatePropertiesWithEvent:(id)a0;
- (void)tabletPoint:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (id)_desiredPressureBehavior;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (BOOL)_hasCustomDefaultPressure;
- (void)_setHasCustomDefaultPressure:(BOOL)a0;

@end
