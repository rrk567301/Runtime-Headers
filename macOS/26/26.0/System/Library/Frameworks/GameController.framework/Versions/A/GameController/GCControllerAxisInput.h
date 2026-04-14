@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement {
    float _minValue;
    float _maxValue;
}

@property (nonatomic) float value;
@property (retain, nonatomic) GCControllerButtonInput *positive;
@property (retain, nonatomic) GCControllerButtonInput *negative;
@property (nonatomic, getter=isHorizontal) BOOL horizontal;
@property (copy, nonatomic) id /* block */ valueChangedHandler;

- (BOOL)_setValue:(float)a0;
- (id)initWithCollection:(id)a0;
- (id)debugDescription;
- (id)description;
- (id)localizedName;
- (float)maxValue;
- (float)minValue;
- (void).cxx_destruct;
- (BOOL)_setValue:(float)a0 queue:(id)a1;
- (int)getAndResetTimesPressed;
- (id)initWithCollection:(id)a0 horizontal:(BOOL)a1;
- (BOOL)isAnalog;
- (void)setMinValue:(float)a0 andMaxValue:(float)a1;
- (id)unmappedLocalizedName;

@end
