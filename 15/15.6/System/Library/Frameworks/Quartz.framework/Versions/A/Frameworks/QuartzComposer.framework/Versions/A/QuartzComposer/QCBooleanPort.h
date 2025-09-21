@interface QCBooleanPort : QCPort {
    char _value;
    void *_unused3[4];
}

+ (Class)baseClass;

- (id)value;
- (char)booleanValue;
- (char)setValue:(id)a0;
- (Class)valueClass;
- (id)stateValue;
- (char)setStateValue:(id)a0;
- (void)setBooleanValue:(char)a0;
- (void)_setFalse:(id)a0;
- (void)_setTrue:(id)a0;
- (char)acceptValuesOfClass:(Class)a0;
- (void)editValueWithEvent:(id)a0 inView:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (void)resetParameterView:(id)a0;
- (id)setupParameterView;
- (char)takeValue:(id)a0 fromPort:(id)a1;
- (id)tooltipString;

@end
