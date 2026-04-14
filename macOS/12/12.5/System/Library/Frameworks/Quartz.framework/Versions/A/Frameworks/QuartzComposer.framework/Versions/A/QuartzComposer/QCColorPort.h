@interface QCColorPort : QCPort {
    double _red;
    double _green;
    double _blue;
    double _alpha;
    void *_unused3[4];
}

+ (Class)baseClass;

- (id)value;
- (BOOL)setValue:(id)a0;
- (double)alphaComponent;
- (double)redComponent;
- (double)greenComponent;
- (double)blueComponent;
- (void)setAlphaComponent:(double)a0;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (void)_windowWillClose:(id)a0;
- (Class)valueClass;
- (BOOL)setStateValue:(id)a0;
- (id)stateValue;
- (void)setRedComponent:(double)a0;
- (void)setGreenComponent:(double)a0;
- (void)setBlueComponent:(double)a0;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (id)tooltipString;
- (void)setRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (struct CGColor { } *)newCGColor;
- (struct CGColor { } *)createCGColor;
- (id)CIColorWithColorSpace:(struct CGColorSpace { } *)a0;
- (BOOL)canConnectToPort:(id)a0;
- (BOOL)takeValue:(id)a0 fromPort:(id)a1;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (id)setupParameterView;
- (void)resetParameterView:(id)a0;
- (void)editValueWithEvent:(id)a0 inView:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_doneColor:(id)a0;
- (id)tooltipExtensionView;
- (struct CGSize { double x0; double x1; })tooltipExtensionViewSize:(id)a0;
- (void)drawPortView:(id)a0;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;

@end
