@class GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : GCControllerButtonInput

@property (weak, nonatomic) GCControllerAxisInput *axis;
@property (readonly, nonatomic, getter=isPositive) char positive;

- (void).cxx_destruct;
- (float)value;
- (id)localizedName;
- (id)collection;
- (char)_setValue:(float)a0;
- (char)_commitPendingValueOnQueue:(id)a0;
- (void)_setPendingValue:(float)a0;
- (char)_setValue:(float)a0 queue:(id)a1;
- (char)_setValueFromAxisButton:(float)a0;
- (char)_setValueFromAxisButton:(float)a0 queue:(id)a1;
- (id)initWithAxis:(id)a0 positive:(char)a1;
- (char)isAnalog;
- (id)unmappedLocalizedName;

@end
