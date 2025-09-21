@interface GCControllerButtonInput : GCControllerElement {
    int _pressCounter;
}

@property (nonatomic, getter=areTouchedAndValueDistinct) char touchedAndValueDistinct;
@property char nonAnalog;
@property (nonatomic) float deadzone;
@property (copy, nonatomic) id /* block */ valueChangedHandler;
@property (copy, nonatomic) id /* block */ pressedChangedHandler;
@property (copy, nonatomic) id /* block */ touchedChangedHandler;
@property (readonly, nonatomic) float value;
@property (readonly, nonatomic, getter=isPressed) char pressed;
@property (readonly, nonatomic, getter=isTouched) char touched;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)setValue:(float)a0;
- (char)_setValue:(float)a0;
- (char)_setTouched:(char)a0 queue:(id)a1;
- (char)_setValue:(float)a0 queue:(id)a1;
- (int)getAndResetTimesPressed;
- (id)initWithDescriptionName:(id)a0;
- (char)isAnalog;

@end
